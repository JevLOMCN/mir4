#pragma once
#include "CoreMinimal.h"
#include "ResizeFontInfo.generated.h"

USTRUCT(BlueprintType)
struct FResizeFontInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FromSourceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToSourceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestSize;
    
    MIRMOBILE_API FResizeFontInfo();
};

