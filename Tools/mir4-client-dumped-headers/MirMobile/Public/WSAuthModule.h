#pragma once
#include "CoreMinimal.h"
#include "WSModuleBase.h"
#include "WSAuthModule.generated.h"

UCLASS(Blueprintable)
class UWSAuthModule : public UWSModuleBase {
    GENERATED_BODY()
public:
    UWSAuthModule();

    UFUNCTION(BlueprintCallable)
    void OnServiceAuthFail();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClickRefundGuidePopup_Confirm();
    
};

