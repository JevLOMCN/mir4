#pragma once
#include "CoreMinimal.h"
#include "VirtualKeyboardOptions.generated.h"

USTRUCT(BlueprintType)
struct FVirtualKeyboardOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutocorrect;
    
    SLATE_API FVirtualKeyboardOptions();
};

