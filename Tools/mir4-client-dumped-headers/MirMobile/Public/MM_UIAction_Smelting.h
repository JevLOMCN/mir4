#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Smelting.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Smelting : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Smelting();

    UFUNCTION(BlueprintCallable)
    void OnClickSmeltOK();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSmeltCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAutoSmeltOK();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAutoSmeltCancel();
    
};

