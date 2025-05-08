#pragma once
#include "CoreMinimal.h"
#include "LoginSubSystemBase.h"
#include "FacebookLoginSubSystem.generated.h"

class UFirebaseCredential;
class UFirebaseUser;

UCLASS(Blueprintable)
class UFacebookLoginSubSystem : public ULoginSubSystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFirebaseCredential* m_WindowFirebaseCredential;
    
public:
    UFacebookLoginSubSystem();

    UFUNCTION(BlueprintCallable)
    void RequestFacebookCredentialComplete(bool IsSuccess, UFirebaseCredential* credential);
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedFacebookLoginSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedFacebookLoginFail();
    
    UFUNCTION(BlueprintCallable)
    void AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage);
    
};

