#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ValueListenerDelegateDelegate.h"
#include "FirebaseValueListener.generated.h"

class UFirebaseValueListener;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseValueListener : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueListenerDelegate OnEvent;
    
    UFirebaseValueListener();

    UFUNCTION(BlueprintCallable)
    static UFirebaseValueListener* RunValueListener(UFirebaseValueListener* listener);
    
};

