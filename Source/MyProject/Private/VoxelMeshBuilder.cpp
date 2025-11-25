#include "VoxelMeshBuilder.h"
#include "MyMarchingCubes.h"
#include "Kismet/KismetMathLibrary.h"

FVector FVoxelMeshBuilder::InterpolateVertex(const FVector& P1, const FVector& P2, float ValP1, float ValP2)
{
    if (FMath::IsNearlyZero(ValP1 - ValP2))
        return P1;

    float T = (0.0f - ValP1) / (ValP2 - ValP1);
    return FMath::Lerp(P1, P2, T);
}

void FVoxelMeshBuilder::GenerateMesh(
    const FVoxelData& Data,
    float Step,
    TArray<FVector>& OutVertices,
    TArray<int32>& OutTriangles,
    TArray<FVector>& OutNormals)
{
    OutVertices.Reset();
    OutTriangles.Reset();
    OutNormals.Reset();

    const int32 Size = Data.GetSize();

    TMap<FVector, FVector> NormalMap;

    for (int32 X = 0; X < Size - 1; X++)
    {
        for (int32 Y = 0; Y < Size - 1; Y++)
        {
            for (int32 Z = 0; Z < Size - 1; Z++)
            {
                MarchCube(Data, FVector(X, Y, Z), Step, OutVertices, OutTriangles, NormalMap);
            }
        }
    }

    OutNormals.SetNum(OutVertices.Num());
    for (int32 i = 0; i < OutVertices.Num(); ++i)
    {
        const FVector& Vertex = OutVertices[i];
        FVector Normal = NormalMap.Contains(Vertex) ? NormalMap[Vertex].GetSafeNormal() : FVector::UpVector;
        OutNormals[i] = Normal;
    }
}

void FVoxelMeshBuilder::MarchCube(
    const FVoxelData& Data,
    const FVector& Position,
    float Step,
    TArray<FVector>& Vertices,
    TArray<int32>& Triangles,
    TMap<FVector, FVector>& NormalMap)
{
    float Corner[8];
    FVector CornerPos[8];

    const int32 X = Position.X;
    const int32 Y = Position.Y;
    const int32 Z = Position.Z;

    Corner[0] = Data.GetDensity(X, Y, Z);
    Corner[1] = Data.GetDensity(X + Step, Y, Z);
    Corner[2] = Data.GetDensity(X + Step, Y + Step, Z);
    Corner[3] = Data.GetDensity(X, Y + Step, Z);
    Corner[4] = Data.GetDensity(X, Y, Z + Step);
    Corner[5] = Data.GetDensity(X + Step, Y, Z + Step);
    Corner[6] = Data.GetDensity(X + Step, Y + Step, Z + Step);
    Corner[7] = Data.GetDensity(X, Y + Step, Z + Step);

    CornerPos[0] = FVector(X, Y, Z);
    CornerPos[1] = FVector(X + Step, Y, Z);
    CornerPos[2] = FVector(X + Step, Y + Step, Z);
    CornerPos[3] = FVector(X, Y + Step, Z);
    CornerPos[4] = FVector(X, Y, Z + Step);
    CornerPos[5] = FVector(X + Step, Y, Z + Step);
    CornerPos[6] = FVector(X + Step, Y + Step, Z + Step);
    CornerPos[7] = FVector(X, Y + Step, Z + Step);

    int32 CubeIndex = 0;
    for (int32 i = 0; i < 8; ++i)
        if (Corner[i] < 0)
            CubeIndex |= (1 << i);

    if (FMyMarchingCubes::EdgeTable[CubeIndex] == 0)
        return;

    FVector VertList[12];
    const uint8(*EdgeVerts)[2] = FMyMarchingCubes::EdgeIndices;

    for (int32 i = 0; i < 12; i++)
    {
        if (FMyMarchingCubes::EdgeTable[CubeIndex] & (1 << i))
        {
            int32 A = EdgeVerts[i][0];
            int32 B = EdgeVerts[i][1];
            VertList[i] = InterpolateVertex(CornerPos[A], CornerPos[B], Corner[A], Corner[B]);
        }
    }

    const int32* TriTable = &FMyMarchingCubes::TriTable[CubeIndex * 16];
    for (int32 i = 0; i < 16 && TriTable[i] != -1; i += 3)
    {
        int32 Index0 = Vertices.Add(VertList[TriTable[i]]);
        int32 Index1 = Vertices.Add(VertList[TriTable[i + 1]]);
        int32 Index2 = Vertices.Add(VertList[TriTable[i + 2]]);

        Triangles.Add(Index0);
        Triangles.Add(Index1);
        Triangles.Add(Index2);

        FVector Normal = FVector::CrossProduct(
            VertList[TriTable[i + 1]] - VertList[TriTable[i]],
            VertList[TriTable[i + 2]] - VertList[TriTable[i]]
        ).GetSafeNormal();

        NormalMap.FindOrAdd(VertList[TriTable[i]]) += Normal;
        NormalMap.FindOrAdd(VertList[TriTable[i + 1]]) += Normal;
        NormalMap.FindOrAdd(VertList[TriTable[i + 2]]) += Normal;
    }
}
