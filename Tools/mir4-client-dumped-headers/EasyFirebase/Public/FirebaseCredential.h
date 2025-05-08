#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FirebaseCredential.generated.h"

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseCredential : public UObject {
    GENERATED_BODY()
public:
    UFirebaseCredential();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString provider();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool is_valid();
    
};

