#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "EDirectingTriggerType.h"
#include "DirectingTrigger.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class ADirectingTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SequencePlayID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirectingTriggerType m_DirectingState;
    
    ADirectingTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLevelSequenceEvent(ULevelSequence* pLevelSequenceAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishDirecting();
    
};

