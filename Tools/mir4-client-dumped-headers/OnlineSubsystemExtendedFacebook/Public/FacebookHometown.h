#pragma once
#include "CoreMinimal.h"
#include "FacebookHometown.generated.h"

USTRUCT(BlueprintType)
struct FFacebookHometown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    ONLINESUBSYSTEMEXTENDEDFACEBOOK_API FFacebookHometown();
};

