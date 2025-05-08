#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FirebaseAuth.generated.h"

class UFirebaseAuth;
class UFirebaseAuthStateListener;
class UFirebaseCredential;
class UFirebaseFutureFetchProvideResult;
class UFirebaseFutureSignInResult;
class UFirebaseFutureUser;
class UFirebaseFutureVoid;
class UFirebaseUser;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseAuth : public UObject {
    GENERATED_BODY()
public:
    UFirebaseAuth();

    UFUNCTION(BlueprintCallable)
    void SignOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureUser* SignInWithEmailAndPasswordLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* SignInWithEmailAndPassword(const FString& email, const FString& passwd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureUser* SignInWithCustomTokenLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* SignInWithCustomToken(const FString& Token);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureUser* SignInWithCredentialLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* SignInWithCredential(UFirebaseCredential* credential);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* SignInAnonymously();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureSignInResult* SignInAndRetrieveDataWithCredentialLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureSignInResult* SignInAndRetrieveDataWithCredential(UFirebaseCredential* credential);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureVoid* SendPasswordResetEmailLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SendPasswordResetEmail(const FString& email);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAuthStateListener(UFirebaseAuthStateListener* listener);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseCredential* GetPlayServiceCredential(const FString& serverAuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseAuth* GetFirebaseAuth();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureFetchProvideResult* FetchProvidersForEmailLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureFetchProvideResult* FetchProvidersForEmail(const FString& email);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseUser* current_user();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureUser* CreateUserWithEmailAndPasswordLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureUser* CreateUserWithEmailAndPassword(const FString& email, const FString& passwd);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseAuthStateListener* AddAuthStateListener();
    
};

