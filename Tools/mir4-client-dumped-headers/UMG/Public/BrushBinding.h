#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PropertyBinding.h"
#include "BrushBinding.generated.h"

UCLASS(Blueprintable)
class UMG_API UBrushBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UBrushBinding();

    UFUNCTION(BlueprintCallable)
    FSlateBrush GetValue() const;
    
};

