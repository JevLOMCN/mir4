#pragma once
#include "CoreMinimal.h"
#include "LoginSubSystemBase.h"
#include "SteamLoginSubSystem.generated.h"

UCLASS(Blueprintable)
class USteamLoginSubSystem : public ULoginSubSystemBase {
    GENERATED_BODY()
public:
    USteamLoginSubSystem();

    UFUNCTION(BlueprintCallable)
    void RequestSteamCredentialComplete(bool IsSuccess, const FString& IdToken);
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedSteamLoginSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedSteamLoginFail();
    
};

