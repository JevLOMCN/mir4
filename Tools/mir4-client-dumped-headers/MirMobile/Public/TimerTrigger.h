#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "TimerTrigger.generated.h"

UCLASS(Blueprintable)
class ATimerTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowLimitTimeWidget;
    
    ATimerTrigger(const FObjectInitializer& ObjectInitializer);

};

