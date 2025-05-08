#pragma once
#include "CoreMinimal.h"
#include "NamedSlotBinding.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct UMG_API FNamedSlotBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content;
    
    FNamedSlotBinding();
};

