#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SteamLoginDelegateDelegate.h"
#include "SteamLogin.generated.h"

class USteamLogin;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDSTEAM_API USteamLogin : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamLoginDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamLoginDelegate OnFail;
    
    USteamLogin();

    UFUNCTION(BlueprintCallable)
    static USteamLogin* SteamLogin();
    
};

