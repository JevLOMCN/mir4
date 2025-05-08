#pragma once
#include "CoreMinimal.h"
#include "PatchFileInfo.generated.h"

USTRUCT(BlueprintType)
struct FPatchFileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool needDecompress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString decompressSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 crc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 downloadTargetSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 currentDownloadSize;
    
    MIRMOBILE_API FPatchFileInfo();
};

