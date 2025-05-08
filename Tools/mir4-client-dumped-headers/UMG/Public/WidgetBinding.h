#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "WidgetBinding.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UMG_API UWidgetBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UWidgetBinding();

    UFUNCTION(BlueprintCallable)
    UWidget* GetValue() const;
    
};

