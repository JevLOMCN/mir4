#pragma once
#include "CoreMinimal.h"
#include "IAPStoreModuleBase.h"
#include "IAPSteamStoreModule.generated.h"

UCLASS(Blueprintable)
class UIAPSteamStoreModule : public UIAPStoreModuleBase {
    GENERATED_BODY()
public:
    UIAPSteamStoreModule();

    UFUNCTION(BlueprintCallable)
    void OnClickVerifyPopupButton();
    
};

