#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImageWriteQueue -ObjectName=EDesiredImageFormat -FallbackName=EDesiredImageFormat
#include "CapturedPixels.h"
#include "CapturedPixelsID.h"
#include "FrameMetrics.h"
#include "UserDefinedCaptureProtocol.h"
#include "UserDefinedImageCaptureProtocol.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, Config=Engine)
class MOVIESCENECAPTURE_API UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDesiredImageFormat Format;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCompression;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompressionQuality;
    
    UUserDefinedImageCaptureProtocol();

    UFUNCTION(BlueprintCallable)
    void WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData);
    
    UFUNCTION(BlueprintCallable)
    FString GenerateFilenameForCurrentFrame();
    
    UFUNCTION(BlueprintCallable)
    FString GenerateFilenameForBuffer(UTexture* Buffer, const FCapturedPixelsID& StreamID);
    
};

