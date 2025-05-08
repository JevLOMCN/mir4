#pragma once
#include "CoreMinimal.h"
#include "CapturedPixels.h"
#include "CapturedPixelsID.h"
#include "FrameMetrics.h"
#include "MovieSceneImageCaptureProtocolBase.h"
#include "UserDefinedCaptureProtocol.generated.h"

class UTexture;
class UWorld;

UCLASS(Abstract, Blueprintable)
class MOVIESCENECAPTURE_API UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UUserDefinedCaptureProtocol();

    UFUNCTION(BlueprintCallable)
    void StopCapturingFinalPixels();
    
    UFUNCTION(BlueprintCallable)
    void StartCapturingFinalPixels(const FCapturedPixelsID& StreamID);
    
    UFUNCTION(BlueprintCallable)
    void ResolveBuffer(UTexture* Buffer, const FCapturedPixelsID& BufferID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarmUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPixelsReceived(const FCapturedPixels& Pixels, const FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCanFinalize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginFinalize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameMetrics GetCurrentFrameMetrics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GenerateFilename(const FFrameMetrics& InFrameMetrics) const;
    
};

