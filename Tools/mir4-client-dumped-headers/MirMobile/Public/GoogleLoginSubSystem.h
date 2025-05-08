#pragma once
#include "CoreMinimal.h"
#include "LoginSubSystemBase.h"
#include "GoogleLoginSubSystem.generated.h"

class UFirebaseCredential;
class UFirebaseGoogleCredential;
class UFirebaseUser;

UCLASS(Blueprintable)
class UGoogleLoginSubSystem : public ULoginSubSystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFirebaseCredential* m_WindowFirebaseCredential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFirebaseGoogleCredential* m_GoogleCredential;
    
public:
    UGoogleLoginSubSystem();

    UFUNCTION(BlueprintCallable)
    void RequestGoogleCredentialComplete(bool IsSuccess, UFirebaseCredential* credential);
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedGoogleLoginSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedGoogleLoginFail();
    
    UFUNCTION(BlueprintCallable)
    void AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage);
    
};

