#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GogoleServerAuthCodeDelegateDelegate.h"
#include "FirebaseGoogleServerAuthCode.generated.h"

class UFirebaseGoogleServerAuthCode;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseGoogleServerAuthCode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGogoleServerAuthCodeDelegate OnComplete;
    
    UFirebaseGoogleServerAuthCode();

    UFUNCTION(BlueprintCallable)
    static UFirebaseGoogleServerAuthCode* RequestGoogleServerAuthCode();
    
};

