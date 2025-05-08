#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FirebaseUserInfoInterface.generated.h"

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseUserInfoInterface : public UObject {
    GENERATED_BODY()
public:
    UFirebaseUserInfoInterface();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString uid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString provider_id();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString photo_url();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString phone_number();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString email();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString display_name();
    
};

