#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AuthStateListenerDelegateDelegate.h"
#include "FirebaseAuthStateListener.generated.h"

class UFirebaseAuthStateListener;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseAuthStateListener : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthStateListenerDelegate OnEvent;
    
    UFirebaseAuthStateListener();

    UFUNCTION(BlueprintCallable)
    static UFirebaseAuthStateListener* RunValueListener(UFirebaseAuthStateListener* listener);
    
};

