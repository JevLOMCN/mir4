#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_EquipInfo.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_EquipInfo : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_MSG_LOCK_ITEM;
    
public:
    UMM_UIAction_EquipInfo();

    UFUNCTION(BlueprintCallable)
    void Request_UpdateInven();
    
    UFUNCTION(BlueprintCallable)
    void OnSellConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnSellCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnRegisterConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnRegisterCancel();
    
};

