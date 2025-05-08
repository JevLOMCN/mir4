#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MM_IAPManager.generated.h"

class UIAPStoreModuleBase;

UCLASS(Blueprintable)
class UMM_IAPManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIAPStoreModuleBase* MirStoreModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIAPStoreModuleBase* MirStoreModuleHydra;
    
public:
    UMM_IAPManager();

    UFUNCTION(BlueprintCallable)
    void OnClickPopupAccountSanctions_Confirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPopupAccountSanctions_Cancel();
    
};

