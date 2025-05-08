#pragma once
#include "CoreMinimal.h"
#include "FirebaseConfigKeyValueVariant.generated.h"

class UFirebaseVariant;

USTRUCT(BlueprintType)
struct FFirebaseConfigKeyValueVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFirebaseVariant* Value;
    
    EASYFIREBASE_API FFirebaseConfigKeyValueVariant();
};

