#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DataSnapshotFinishDelegateDelegate.h"
#include "FirebaseFutureDataSnapshot.generated.h"

class UFirebaseFutureDataSnapshot;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFutureDataSnapshot : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataSnapshotFinishDelegate OnComplete;
    
    UFirebaseFutureDataSnapshot();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureDataSnapshot* WaitFuture(UFirebaseFutureDataSnapshot* future);
    
};

