#pragma once
#include "CoreMinimal.h"
#include "FirebaseUserInfoInterface.h"
#include "UserMetadata.h"
#include "UserProfile.h"
#include "FirebaseUser.generated.h"

class UFirebaseCredential;
class UFirebaseFutureSignInResult;
class UFirebaseFutureString;
class UFirebaseFutureUser;
class UFirebaseFutureVoid;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseUser : public UFirebaseUserInfoInterface {
    GENERATED_BODY()
public:
    UFirebaseUser();

    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdateUserProfileLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdateUserProfile(const FUserProfile& profile);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* UpdatePhoneNumberCredentialLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* UpdatePhoneNumberCredential(UFirebaseCredential* crdenntial);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdatePasswordLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdatePassword(const FString& passwd);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdateEmailLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdateEmail(const FString& email);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureUser* Unlink(const FString& provider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureVoid* SendEmailVerificationLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SendEmailVerification();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* ReloadLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* Reload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureVoid* ReauthenticateLastResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureSignInResult* ReauthenticateAndRetrieveDataLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureSignInResult* ReauthenticateAndRetrieveData(UFirebaseCredential* crdenntial);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* Reauthenticate(UFirebaseCredential* crdenntial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFirebaseUserInfoInterface*> provider_data();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserMetadata metadata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureUser* LinkWithCredentialLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* LinkWithCredential(UFirebaseCredential* crdenntial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureSignInResult* LinkAndRetrieveDataWithCredentialLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureSignInResult* LinkAndRetrieveDataWithCredential(UFirebaseCredential* crdenntial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool is_email_verified();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool is_anonymous();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureString* GetTokenLastResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureString* GetToken(bool forceRefresh);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* DeleteLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* Delete();
    
};

