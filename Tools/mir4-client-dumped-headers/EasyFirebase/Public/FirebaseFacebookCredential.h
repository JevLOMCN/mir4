#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FacebookCredentialDelegateDelegate.h"
#include "FirebaseFacebookCredential.generated.h"

class UFirebaseFacebookCredential;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFacebookCredential : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacebookCredentialDelegate OnComplete;
    
    UFirebaseFacebookCredential();

    UFUNCTION(BlueprintCallable)
    static UFirebaseFacebookCredential* RequestFacebookCredential();
    
};

