#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "TriggerScriptData.h"
#include "ScriptTrigger.generated.h"

UCLASS(Blueprintable)
class AScriptTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerScriptData> m_ScriptDataArray;
    
    AScriptTrigger(const FObjectInitializer& ObjectInitializer);

};

