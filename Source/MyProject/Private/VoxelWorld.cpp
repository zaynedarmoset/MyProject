#include "VoxelWorld.h"          // MUST be first include
#include "VoxelChunk.h"
#include "Engine/World.h"

AVoxelWorld::AVoxelWorld()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AVoxelWorld::BeginPlay()
{
    Super::BeginPlay();
    GenerateWorld();
}

void AVoxelWorld::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AVoxelWorld::GenerateWorld()
{
    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    SpawnedChunks.Empty();

    const FVector Origin = GetActorLocation();
    const int32 Cells = CellsPerChunk;

    // Each chunk spans Cells * VoxelScale units along X/Y
    const float ChunkWorldSize = static_cast<float>(Cells) * VoxelScale;

    for (int32 X = 0; X < WorldSizeInChunks; ++X)
    {
        for (int32 Y = 0; Y < WorldSizeInChunks; ++Y)
        {
            const FVector SpawnLocation = Origin + FVector(
                static_cast<float>(X) * ChunkWorldSize,
                static_cast<float>(Y) * ChunkWorldSize,
                0.0f
            );

            FActorSpawnParameters Params;
            Params.Owner = this;

            AVoxelChunk* NewChunk = World->SpawnActor<AVoxelChunk>(
                AVoxelChunk::StaticClass(),
                SpawnLocation,
                FRotator::ZeroRotator,
                Params
            );

            if (NewChunk)
            {
                NewChunk->VoxelScale = VoxelScale;
                NewChunk->CellsPerAxis = Cells;
                NewChunk->LodLevel = 0;

                NewChunk->InitializeChunk(FIntVector(X, Y, 0), Cells);
                SpawnedChunks.Add(NewChunk);
            }
        }
    }
}
