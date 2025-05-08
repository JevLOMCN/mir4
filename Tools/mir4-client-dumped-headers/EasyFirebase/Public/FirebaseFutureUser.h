#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UserFinishDelegateDelegate.h"
#include "FirebaseFutureUser.generated.h"

class UFirebaseFutureUser;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFutureUser : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserFinishDelegate OnComplete;
    
    UFirebaseFutureUser();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureUser* WaitFuture(UFirebaseFutureUser* future);
    
};

