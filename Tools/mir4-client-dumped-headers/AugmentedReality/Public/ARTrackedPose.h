#pragma once
#include "CoreMinimal.h"
#include "ARPose3D.h"
#include "ARTrackedGeometry.h"
#include "ARTrackedPose.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARTrackedPose : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UARTrackedPose();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FARPose3D GetTrackedPoseData() const;
    
};

