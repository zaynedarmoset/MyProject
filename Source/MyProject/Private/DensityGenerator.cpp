#include "DensityGenerator.h"
#include "Math/UnrealMathUtility.h"

// Simple fractal heightfield: mountains from 2D Perlin
static float SampleHeight2D(const FVector& WorldPos, int32 LodLevel)
{
    // World-space frequency: lower = wider mountains
    const float BaseFreq = 0.0008f;
    const float MaxHeight = 3000.f;
    const int32 Octaves = 5;
    const float Persistence = 0.5f;
    const float Lacunarity = 2.0f;
    const float HeightPower = 1.5f;   // >1 makes valleys flatter, peaks sharper

    float Amplitude = 1.f;
    float Frequency = BaseFreq;
    float NoiseSum = 0.f;
    float AmpSum = 0.f;

    // Make higher LODs a bit smoother (optional)
    if (LodLevel > 0)
    {
        Frequency *= FMath::Pow(2.f, -LodLevel);
    }

    for (int32 Oct = 0; Oct < Octaves; ++Oct)
    {
        const float NX = WorldPos.X * Frequency;
        const float NY = WorldPos.Y * Frequency;

        const float N = FMath::PerlinNoise2D(FVector2D(NX, NY)); // [-1, 1]
        NoiseSum += N * Amplitude;
        AmpSum += Amplitude;

        Amplitude *= Persistence;
        Frequency *= Lacunarity;
    }

    float Noise01 = (AmpSum > 0.f) ? (NoiseSum / AmpSum) * 0.5f + 0.5f : 0.5f;
    Noise01 = FMath::Clamp(Noise01, 0.f, 1.f);

    // Shape curve
    Noise01 = FMath::Pow(Noise01, HeightPower);

    return Noise01 * MaxHeight;
}

float UDensityGenerator::SampleDensity(const FVector& WorldPos, int32 LodLevel)
{
    const float TerrainHeight = SampleHeight2D(WorldPos, LodLevel);

    // Above the terrain: air  (negative)
    // Below the terrain: solid (positive)
    return TerrainHeight - WorldPos.Z;
}
