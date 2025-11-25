#pragma once

#include "CoreMinimal.h"

struct FMyMarchingCubes
{
    static const uint16 EdgeTable[256];
    static const uint64 TriTable[256];
    static const uint8 EdgeIndices[12][2];

};