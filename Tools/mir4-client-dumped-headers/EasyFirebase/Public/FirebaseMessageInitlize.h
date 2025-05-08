#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FirebaseMessageRcvDelegateDelegate.h"
#include "FirebaseTokenRcvDelegateDelegate.h"
#include "FirebaseMessageInitlize.generated.h"

class UFirebaseMessageInitlize;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseMessageInitlize : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFirebaseMessageRcvDelegate OnMessageRcv;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFirebaseTokenRcvDelegate OnTokenRcv;
    
    UFirebaseMessageInitlize();

    UFUNCTION(BlueprintCallable)
    static UFirebaseMessageInitlize* FirebaseMessageInitlize();
    
};

