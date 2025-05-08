#pragma once
#include "CoreMinimal.h"
#include "UserProfile.generated.h"

USTRUCT(BlueprintType)
struct FUserProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString photo_url;
    
    EASYFIREBASE_API FUserProfile();
};

