#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopupStyleBook.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_PopupStyleBook : public UWidgetBase {
    GENERATED_BODY()
public:
    UMM_PopupStyleBook();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

