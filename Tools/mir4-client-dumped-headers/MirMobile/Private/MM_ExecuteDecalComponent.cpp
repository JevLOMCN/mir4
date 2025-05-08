#include "MM_ExecuteDecalComponent.h"

UMM_ExecuteDecalComponent::UMM_ExecuteDecalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElapsedTime = 0.00f;
    this->ScalingTime = 0.00f;
    this->AliveTime = 0.00f;
    this->CharScale = 1.00f;
    this->ExecuteDecal = NULL;
    this->ExecuteMaterialInstanceDynamic = NULL;
}


