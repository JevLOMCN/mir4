#include "KismetAnimationLibrary.h"

UKismetAnimationLibrary::UKismetAnimationLibrary() {
}

void UKismetAnimationLibrary::K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale) {
}

void UKismetAnimationLibrary::K2_StartProfilingTimer() {
}

FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ) {
    return FVector{};
}

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax) {
    return 0.0f;
}

FTransform UKismetAnimationLibrary::K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree) {
    return FTransform{};
}

float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const FString& LogPrefix) {
    return 0.0f;
}

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(const USkeletalMeshComponent* Component, const FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax) {
    return 0.0f;
}

FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(const USkeletalMeshComponent* Component, const FName SocketOrBoneNameFrom, const FName SocketOrBoneNameTo) {
    return FVector{};
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, const FName SocketOrBoneName, const FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve) {
    return 0.0f;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax) {
    return 0.0f;
}


