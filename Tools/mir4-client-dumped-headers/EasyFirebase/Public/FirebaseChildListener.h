#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ChildListenerDelegateDelegate.h"
#include "FirebaseChildListener.generated.h"

class UFirebaseChildListener;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseChildListener : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChildListenerDelegate OnEvent;
    
    UFirebaseChildListener();

    UFUNCTION(BlueprintCallable)
    static UFirebaseChildListener* RunChildListener(UFirebaseChildListener* listener);
    
};

