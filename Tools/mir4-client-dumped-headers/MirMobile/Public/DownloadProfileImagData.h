#pragma once
#include "CoreMinimal.h"
#include "DownloadProfileImagData.generated.h"

class UImage;

USTRUCT(BlueprintType)
struct FDownloadProfileImagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FailCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ImageArray;
    
    MIRMOBILE_API FDownloadProfileImagData();
};

