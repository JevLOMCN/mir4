#pragma once
#include "CoreMinimal.h"
#include "FacebookFriend.generated.h"

USTRUCT(BlueprintType)
struct FFacebookFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AvatarURL;
    
    ONLINESUBSYSTEMEXTENDEDFACEBOOK_API FFacebookFriend();
};

