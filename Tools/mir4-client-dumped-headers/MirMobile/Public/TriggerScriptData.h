#pragma once
#include "CoreMinimal.h"
#include "ETriggerScriptType.h"
#include "TriggerScriptData.generated.h"

USTRUCT(BlueprintType)
struct FTriggerScriptData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerScriptType ScriptType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScriptValue;
    
    MIRMOBILE_API FTriggerScriptData();
};

