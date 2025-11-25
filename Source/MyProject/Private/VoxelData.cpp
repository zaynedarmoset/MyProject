#include "VoxelData.h"

void FVoxelData::Initialize(int32 InSize)
{
    Size = InSize;
    Voxels.SetNumZeroed(Size * Size * Size);
}

int32 FVoxelData::GetIndex(int32 X, int32 Y, int32 Z) const
{
    return X + Y * Size + Z * Size * Size;
}

uint8 FVoxelData::GetVoxel(int32 X, int32 Y, int32 Z) const
{
    if (X < 0 || X >= Size ||
        Y < 0 || Y >= Size ||
        Z < 0 || Z >= Size)
    {
        return 0;
    }

    return Voxels[GetIndex(X, Y, Z)];
}

void FVoxelData::SetVoxel(int32 X, int32 Y, int32 Z, uint8 Value)
{
    if (X < 0 || X >= Size ||
        Y < 0 || Y >= Size ||
        Z < 0 || Z >= Size)
    {
        return;
    }

    Voxels[GetIndex(X, Y, Z)] = Value;
}

void FVoxelData::SetDensity(int32 X, int32 Y, int32 Z, float Density)
{
    const uint8 Clamped = FMath::Clamp(FMath::RoundToInt(Density * 255.f), 0, 255);
    SetVoxel(X, Y, Z, Clamped);
}

float FVoxelData::GetDensity(int32 X, int32 Y, int32 Z) const
{
    return static_cast<float>(GetVoxel(X, Y, Z)) / 255.f;
}
