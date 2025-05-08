#pragma once
#include "CoreMinimal.h"
#include "LoginSubSystemBase.h"
#include "AppleLoginSubSystem.generated.h"

class UFirebaseCredential;
class UFirebaseUser;

UCLASS(Blueprintable)
class UAppleLoginSubSystem : public ULoginSubSystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFirebaseCredential* m_WindowFirebaseCredential;
    
public:
    UAppleLoginSubSystem();

    UFUNCTION(BlueprintCallable)
    void RequestSignInForWithdrawCredentialComplete(bool IsSuccess, UFirebaseCredential* credential, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void RequestAppleCredentialComplete(bool IsSuccess, UFirebaseCredential* credential, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedAppleWithdrawLoginSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedAppleWithdrawLoginFail();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedAppleLoginSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedAppleLoginFail();
    
    UFUNCTION(BlueprintCallable)
    void AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void AuthSignInForWithdrawCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage);
    
};

