#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "VoidFinishDelegateDelegate.h"
#include "FirebaseFutureVoid.generated.h"

class UFirebaseFutureVoid;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFutureVoid : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoidFinishDelegate OnComplete;
    
    UFirebaseFutureVoid();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* WaitFuture(UFirebaseFutureVoid* future);
    
};

