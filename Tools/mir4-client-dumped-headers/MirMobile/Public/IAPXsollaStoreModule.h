#pragma once
#include "CoreMinimal.h"
#include "IAPStoreModuleBase.h"
#include "IAPXsollaStoreModule.generated.h"

class UGameInstanceSubsystem;

UCLASS(Blueprintable)
class UIAPXsollaStoreModule : public UIAPStoreModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameInstanceSubsystem* m_XsollaPayStationSubsystem;
    
public:
    UIAPXsollaStoreModule();

    UFUNCTION(BlueprintCallable)
    void OnClickVerifyPopupButton();
    
};

