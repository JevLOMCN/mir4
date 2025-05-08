#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FetchProvidesFinishDelegateDelegate.h"
#include "FirebaseFutureFetchProvideResult.generated.h"

class UFirebaseFutureFetchProvideResult;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFutureFetchProvideResult : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFetchProvidesFinishDelegate OnComplete;
    
    UFirebaseFutureFetchProvideResult();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureFetchProvideResult* WaitFuture(UFirebaseFutureFetchProvideResult* future);
    
};

