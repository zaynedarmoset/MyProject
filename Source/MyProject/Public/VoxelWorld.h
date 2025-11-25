#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelWorld.generated.h"

class AVoxelChunk;

UCLASS()
class MYPROJECT_API AVoxelWorld : public AActor
{
    GENERATED_BODY()

public:
    AVoxelWorld();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    /** Number of voxel cells per axis in each chunk (e.g. 32 => 32^3 cells). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    int32 CellsPerChunk = 32;

    /** Number of chunks along X and Y (world is WorldSizeInChunks x WorldSizeInChunks). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    int32 WorldSizeInChunks = 3;

    /** World size of one voxel cell (25 = 25cm, 100 = 1m). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel")
    float VoxelScale = 100.f;

protected:
    void GenerateWorld();

    UPROPERTY()
    TArray<AVoxelChunk*> SpawnedChunks;
};
