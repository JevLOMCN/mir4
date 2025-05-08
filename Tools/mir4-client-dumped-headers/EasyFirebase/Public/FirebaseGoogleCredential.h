#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GogoleCredentialDelegateDelegate.h"
#include "FirebaseGoogleCredential.generated.h"

class UFirebaseGoogleCredential;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseGoogleCredential : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGogoleCredentialDelegate OnComplete;
    
    UFirebaseGoogleCredential();

    UFUNCTION(BlueprintCallable)
    static UFirebaseGoogleCredential* RequestGoogleCredential();
    
};

