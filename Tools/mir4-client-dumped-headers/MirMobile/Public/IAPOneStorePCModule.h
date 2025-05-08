#pragma once
#include "CoreMinimal.h"
#include "IAPStoreModuleBase.h"
#include "IAPOneStorePCModule.generated.h"

UCLASS(Blueprintable)
class UIAPOneStorePCModule : public UIAPStoreModuleBase {
    GENERATED_BODY()
public:
    UIAPOneStorePCModule();

    UFUNCTION(BlueprintCallable)
    void OnClickVerifyPopupButton();
    
};

