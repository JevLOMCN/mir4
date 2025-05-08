#pragma once
#include "CoreMinimal.h"
#include "AdditionalUserInfo.h"
#include "UserMetadata.h"
#include "FirebaseSignInResult.generated.h"

class UFirebaseUser;

USTRUCT(BlueprintType)
struct FFirebaseSignInResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFirebaseUser* user;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdditionalUserInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMetadata meta;
    
    EASYFIREBASE_API FFirebaseSignInResult();
};

