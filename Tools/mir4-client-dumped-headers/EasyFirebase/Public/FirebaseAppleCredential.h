#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AppleCredentialDelegateDelegate.h"
#include "FirebaseAppleCredential.generated.h"

class UFirebaseAppleCredential;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseAppleCredential : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppleCredentialDelegate OnComplete;
    
    UFirebaseAppleCredential();

    UFUNCTION(BlueprintCallable)
    static UFirebaseAppleCredential* RequestAppleCredential();
    
};

