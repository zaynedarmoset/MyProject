#pragma once

#include "CoreMinimal.h"
#include "VoxelData.h"

class FVoxelMeshBuilder
{
public:
    static void GenerateMesh(
        const FVoxelData& Data,
        float Step,
        TArray<FVector>& OutVertices,
        TArray<int32>& OutTriangles,
        TArray<FVector>& OutNormals
    );

private:
    static void MarchCube(
        const FVoxelData& Data,
        const FVector& CubeCorner,
        float Step,
        TArray<FVector>& Vertices,
        TArray<int32>& Triangles,
        TMap<FVector, FVector>& NormalMap
    );

    static FVector InterpolateVertex(
        const FVector& P1,
        const FVector& P2,
        float ValP1,
        float ValP2
    );
};
