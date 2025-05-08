#pragma once
#include "CoreMinimal.h"
#include "UserMetadata.generated.h"

USTRUCT(BlueprintType)
struct FUserMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 last_sign_in_timestamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 creation_timestamp;
    
    EASYFIREBASE_API FUserMetadata();
};

