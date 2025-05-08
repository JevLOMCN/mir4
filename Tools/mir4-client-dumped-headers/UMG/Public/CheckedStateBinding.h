#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
#include "PropertyBinding.h"
#include "CheckedStateBinding.generated.h"

UCLASS(Blueprintable)
class UMG_API UCheckedStateBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UCheckedStateBinding();

    UFUNCTION(BlueprintCallable)
    ECheckBoxState GetValue() const;
    
};

