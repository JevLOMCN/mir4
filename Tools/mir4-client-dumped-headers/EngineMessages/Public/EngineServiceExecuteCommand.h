#pragma once
#include "CoreMinimal.h"
#include "EngineServiceExecuteCommand.generated.h"

USTRUCT(BlueprintType)
struct FEngineServiceExecuteCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    ENGINEMESSAGES_API FEngineServiceExecuteCommand();
};

