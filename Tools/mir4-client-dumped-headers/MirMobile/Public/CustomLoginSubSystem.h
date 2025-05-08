#pragma once
#include "CoreMinimal.h"
#include "LoginSubSystemBase.h"
#include "CustomLoginSubSystem.generated.h"

class UFirebaseUser;

UCLASS(Blueprintable)
class UCustomLoginSubSystem : public ULoginSubSystemBase {
    GENERATED_BODY()
public:
    UCustomLoginSubSystem();

    UFUNCTION(BlueprintCallable)
    void GetFirebaseUserTokenComplete(const FString& TokenID, int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage);
    
};

