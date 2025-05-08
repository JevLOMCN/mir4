#pragma once
#include "CoreMinimal.h"
#include "FacebookLeaderboard.generated.h"

USTRUCT(BlueprintType)
struct FFacebookLeaderboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    ONLINESUBSYSTEMEXTENDEDFACEBOOK_API FFacebookLeaderboard();
};

