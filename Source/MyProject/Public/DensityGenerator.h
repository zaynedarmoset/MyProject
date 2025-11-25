#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DensityGenerator.generated.h"

UCLASS()
class MYPROJECT_API UDensityGenerator : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Returns density at a world position.
     *  density < 0  = inside solid
     *  density = 0  = surface
     *  density > 0  = empty air
     */
    UFUNCTION(BlueprintCallable, Category = "Voxel")
    static float SampleDensity(const FVector& WorldPos, int32 LodLevel = 0);
};
