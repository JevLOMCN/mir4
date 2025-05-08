#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_NPCShop.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_NPCShop : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_NPCShop();

    UFUNCTION(BlueprintCallable)
    void OnTryBuyCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnTryBuy(int32 elemental_ID);
    
    UFUNCTION(BlueprintCallable)
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedBuy(int32 elemental_ID);
    
    UFUNCTION(BlueprintCallable)
    void OnBuy(int32 count_);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleStateChanged(bool newBattleState);
    
};

