#pragma once

#include "CoreMinimal.h"

struct MYPROJECT_API FVoxelData
{
public:
    void Initialize(int32 InSize);

    uint8 GetVoxel(int32 X, int32 Y, int32 Z) const;
    void  SetVoxel(int32 X, int32 Y, int32 Z, uint8 Value);
    void  SetDensity(int32 X, int32 Y, int32 Z, float Density);
    float GetDensity(int32 X, int32 Y, int32 Z) const;

    int32 GetSize() const { return Size; }

private:
    TArray<uint8> Voxels;
    int32 Size = 0;

    int32 GetIndex(int32 X, int32 Y, int32 Z) const;
};
