#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MM_LoginManager.generated.h"

class UAppleLoginSubSystem;
class UCustomLoginSubSystem;
class UFacebookLoginSubSystem;
class UFirebaseMessagingHelper;
class UGoogleLoginSubSystem;
class UHuaweiPushHelper;
class USteamLoginSubSystem;
class UWSAuthModule;

UCLASS(Blueprintable)
class UMM_LoginManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGoogleLoginSubSystem* m_GoogleLoginSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAppleLoginSubSystem* m_AppleLoginSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFacebookLoginSubSystem* m_FacebookLoginSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomLoginSubSystem* m_CustomLoginSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USteamLoginSubSystem* m_SteamLoginSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWSAuthModule* m_WSAuthModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFirebaseMessagingHelper* m_FirebaseMessagingHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHuaweiPushHelper* m_HuaweiPushHelper;
    
public:
    UMM_LoginManager();

    UFUNCTION(BlueprintCallable)
    void WithdrawPlatformAccount();
    
    UFUNCTION(BlueprintCallable)
    void OnServiceAuthFail();
    
    UFUNCTION(BlueprintCallable)
    void OnReqWithdraw();
    
    UFUNCTION(BlueprintCallable)
    void OnReqCancelWithdraw();
    
};

