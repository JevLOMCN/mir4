#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "StringFinishDelegateDelegate.h"
#include "FirebaseFutureString.generated.h"

class UFirebaseFutureString;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFutureString : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringFinishDelegate OnComplete;
    
    UFirebaseFutureString();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureString* WaitFuture(UFirebaseFutureString* future);
    
};

