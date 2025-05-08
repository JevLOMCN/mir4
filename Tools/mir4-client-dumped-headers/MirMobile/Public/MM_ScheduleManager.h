#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MM_ScheduleManager.generated.h"

UCLASS(Blueprintable)
class UMM_ScheduleManager : public UObject {
    GENERATED_BODY()
public:
    UMM_ScheduleManager();

    UFUNCTION(BlueprintCallable)
    void ExecuteTicketUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAdsInit();
    
};

