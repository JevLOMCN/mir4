#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneCaptureEnvironment.generated.h"

class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;

UCLASS(Blueprintable)
class MOVIESCENECAPTURE_API UMovieSceneCaptureEnvironment : public UObject {
    GENERATED_BODY()
public:
    UMovieSceneCaptureEnvironment();

    UFUNCTION(BlueprintCallable)
    static bool IsCaptureInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCaptureFrameNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCaptureElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
    
};

