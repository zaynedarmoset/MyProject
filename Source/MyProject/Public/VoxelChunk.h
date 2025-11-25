#pragma once

#include "CoreMinimal.h"
#include "VoxelData.h"
#include "GameFramework/Actor.h"
#include "VoxelChunk.generated.h"

class UProceduralMeshComponent;

UCLASS()
class MYPROJECT_API AVoxelChunk : public AActor
{
    GENERATED_BODY()

public:
    AVoxelChunk();

    UFUNCTION(BlueprintCallable, Category = "Voxel")
    void InitializeChunk(FIntVector InChunkCoords, int32 InCellsPerAxis);

    UFUNCTION(BlueprintCallable, Category = "Voxel")
    void UpdateMesh();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Voxel")
    UProceduralMeshComponent* MeshComponent;

    /** Number of cells (cubes) per axis at LOD0. Samples per axis = CellsPerAxis + 1. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    int32 CellsPerAxis = 32;

    /** World size of 1 voxel cell (25 = 25cm, 100 = 1m). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    float VoxelScale = 100.f;

    /** LOD level for this chunk (0 = full resolution). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    int32 LodLevel = 0;

    /** Grid coordinates used to position and seed the chunk. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Voxel")
    FIntVector ChunkCoords;

private:
    FVoxelData VoxelData;
};
