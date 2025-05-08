#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "TextBinding.generated.h"

UCLASS(Blueprintable)
class UMG_API UTextBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UTextBinding();

    UFUNCTION(BlueprintCallable)
    FText GetTextValue() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetStringValue() const;
    
};

