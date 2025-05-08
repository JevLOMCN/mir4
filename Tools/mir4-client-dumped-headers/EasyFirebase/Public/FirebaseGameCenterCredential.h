#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GameCenterFinishDelegateDelegate.h"
#include "FirebaseGameCenterCredential.generated.h"

class UFirebaseGameCenterCredential;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseGameCenterCredential : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameCenterFinishDelegate OnComplete;
    
    UFirebaseGameCenterCredential();

    UFUNCTION(BlueprintCallable)
    static UFirebaseGameCenterCredential* RequestGameCenterCredential();
    
};

