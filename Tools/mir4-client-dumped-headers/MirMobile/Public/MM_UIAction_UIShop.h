#pragma once
#include "CoreMinimal.h"
#include "IAPProductData.h"
#include "MM_UIAction.h"
#include "MM_UIAction_UIShop.generated.h"

class AMM_GachaManagerActor;

UCLASS(Blueprintable)
class UMM_UIAction_UIShop : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_GachaManagerActor* m_pGachaManager;
    
public:
    UMM_UIAction_UIShop();

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteIAP(const bool Success, const int32 ErrorCode, const FIAPProductData& ProductData);
    
};

