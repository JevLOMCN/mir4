#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LoginSubSystemBase.generated.h"

UCLASS(Blueprintable)
class ULoginSubSystemBase : public UObject {
    GENERATED_BODY()
public:
    ULoginSubSystemBase();

    UFUNCTION(BlueprintCallable)
    void OnXsollaLogoutUserSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnXsollaLogoutUserFail(const FString& code, const FString& Description);
    
};

