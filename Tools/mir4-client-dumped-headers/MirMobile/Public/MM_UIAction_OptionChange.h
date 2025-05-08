#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_OptionChange.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_OptionChange : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_OptionChange();

    UFUNCTION(BlueprintCallable)
    void OpenSaveOptionPopup();
    
    UFUNCTION(BlueprintCallable)
    void CancleSaveOptionPopup();
    
};

