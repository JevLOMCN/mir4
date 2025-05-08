#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AppleLoginDelegateDelegate.h"
#include "AppleLogin.generated.h"

class UAppleLogin;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDAPPLE_API UAppleLogin : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppleLoginDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppleLoginDelegate OnFail;
    
    UAppleLogin();

    UFUNCTION(BlueprintCallable)
    static UAppleLogin* AppleLogin();
    
};

