#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GoogleLoginDelegateDelegate.h"
#include "GoogleLogin.generated.h"

class UGoogleLogin;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDGOOGLE_API UGoogleLogin : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoogleLoginDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoogleLoginDelegate OnFail;
    
    UGoogleLogin();

    UFUNCTION(BlueprintCallable)
    static UGoogleLogin* GoogleLogin();
    
};

