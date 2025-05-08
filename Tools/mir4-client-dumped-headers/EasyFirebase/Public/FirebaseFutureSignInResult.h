#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SignInResultFinishDelegateDelegate.h"
#include "FirebaseFutureSignInResult.generated.h"

class UFirebaseFutureSignInResult;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFutureSignInResult : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSignInResultFinishDelegate OnComplete;
    
    UFirebaseFutureSignInResult();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureSignInResult* WaitFuture(UFirebaseFutureSignInResult* future);
    
};

