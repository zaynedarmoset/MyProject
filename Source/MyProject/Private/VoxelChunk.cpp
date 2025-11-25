#include "VoxelChunk.h"
#include "ProceduralMeshComponent.h"
#include "VoxelMeshBuilder.h"
#include "DensityGenerator.h"

AVoxelChunk::AVoxelChunk()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("MeshComponent"));
    SetRootComponent(MeshComponent);
    MeshComponent->bUseAsyncCooking = true;
}

void AVoxelChunk::BeginPlay()
{
    Super::BeginPlay();
}

void AVoxelChunk::InitializeChunk(FIntVector InChunkCoords, int32 InCellsPerAxis)
{
    ChunkCoords = InChunkCoords;

    if (InCellsPerAxis > 0)
    {
        CellsPerAxis = InCellsPerAxis;
    }

    UpdateMesh();
}

void AVoxelChunk::UpdateMesh()
{
    if (!MeshComponent || CellsPerAxis <= 0)
    {
        return;
    }

    const int32 SamplesPerAxis = CellsPerAxis + 1;
    VoxelData.Initialize(SamplesPerAxis);

    const FVector ChunkOrigin = GetActorLocation();

    // Fill density grid
    for (int32 Z = 0; Z < SamplesPerAxis; ++Z)
    {
        for (int32 Y = 0; Y < SamplesPerAxis; ++Y)
        {
            for (int32 X = 0; X < SamplesPerAxis; ++X)
            {
                const FVector LocalPos(
                    static_cast<float>(X) * VoxelScale,
                    static_cast<float>(Y) * VoxelScale,
                    static_cast<float>(Z) * VoxelScale
                );

                const FVector WorldPos = ChunkOrigin + LocalPos;

                const float Density = UDensityGenerator::SampleDensity(WorldPos, LodLevel);
                VoxelData.SetDensity(X, Y, Z, Density);
            }
        }
    }

    FMeshData MeshData = FVoxelMeshBuilder::BuildMarchingCubes(
        VoxelData,
        VoxelScale,
        LodLevel
    );

    MeshComponent->ClearAllMeshSections();
    MeshComponent->CreateMeshSection_LinearColor(
        0,
        MeshData.Vertices,
        MeshData.Triangles,
        MeshData.Normals,
        MeshData.UV0,
        MeshData.VertexColors,
        MeshData.Tangents,
        true,
        false
    );
}
