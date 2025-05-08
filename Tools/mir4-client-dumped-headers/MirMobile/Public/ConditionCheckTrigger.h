#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "EConditionTriggerTargetType.h"
#include "ECondtionTriggerType.h"
#include "ConditionCheckTrigger.generated.h"

UCLASS(Blueprintable)
class AConditionCheckTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECondtionTriggerType m_ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionTriggerTargetType m_ConditionTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ConditionTargetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ConditionValue;
    
    AConditionCheckTrigger(const FObjectInitializer& ObjectInitializer);

};

