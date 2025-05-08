#pragma once
#include "CoreMinimal.h"
#include "PhotoMode_Option.generated.h"

USTRUCT(BlueprintType)
struct FPhotoMode_Option {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OptionState;
    
    MIRMOBILE_API FPhotoMode_Option();
};

