#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Pet.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Pet : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Pet();

    UFUNCTION(BlueprintCallable)
    void Send_PetEquipItem();
    
    UFUNCTION(BlueprintCallable)
    void Send_PetDelDeck();
    
    UFUNCTION(BlueprintCallable)
    void OnPopupExchangeItemConfirm(bool bAbleExchange, int32 iExchangeCount);
    
    UFUNCTION(BlueprintCallable)
    void OnClickShopOK();
    
};

