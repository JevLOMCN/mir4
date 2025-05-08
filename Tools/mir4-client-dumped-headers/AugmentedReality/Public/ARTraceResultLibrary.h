#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ARTraceResult.h"
#include "EARLineTraceChannels.h"
#include "ARTraceResultLibrary.generated.h"

class UARTrackedGeometry;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARTraceResultLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UARTraceResultLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistanceFromCamera(const FARTraceResult& TraceResult);
    
};

