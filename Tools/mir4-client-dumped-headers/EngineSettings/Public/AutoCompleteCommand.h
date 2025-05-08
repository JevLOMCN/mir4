#pragma once
#include "CoreMinimal.h"
#include "AutoCompleteCommand.generated.h"

USTRUCT(BlueprintType)
struct FAutoCompleteCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    ENGINESETTINGS_API FAutoCompleteCommand();
};

