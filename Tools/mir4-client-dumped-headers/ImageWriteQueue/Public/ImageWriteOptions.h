#pragma once
#include "CoreMinimal.h"
#include "EDesiredImageFormat.h"
#include "OnImageWriteCompleteDelegate.h"
#include "ImageWriteOptions.generated.h"

USTRUCT(BlueprintType)
struct FImageWriteOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDesiredImageFormat Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImageWriteComplete OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompressionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsync;
    
    IMAGEWRITEQUEUE_API FImageWriteOptions();
};

