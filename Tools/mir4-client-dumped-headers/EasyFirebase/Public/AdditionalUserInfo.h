#pragma once
#include "CoreMinimal.h"
#include "AdditionalUserInfo.generated.h"

class UFirebaseVariant;

USTRUCT(BlueprintType)
struct FAdditionalUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString provider_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString user_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFirebaseVariant*, UFirebaseVariant*> profile;
    
    EASYFIREBASE_API FAdditionalUserInfo();
};

