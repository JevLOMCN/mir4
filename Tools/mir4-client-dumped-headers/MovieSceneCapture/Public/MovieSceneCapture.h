#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "MovieSceneCaptureInterface.h"
#include "MovieSceneCaptureSettings.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneCapture.generated.h"

class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;

UCLASS(Blueprintable, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENECAPTURE_API UMovieSceneCapture : public UObject, public IMovieSceneCaptureInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath ImageCaptureProtocolType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath AudioCaptureProtocolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneCaptureSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSeparateProcess;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseEditorWhenCaptureStarts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditionalCommandLineArguments;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InheritedCommandLineArguments;
    
    UMovieSceneCapture();

    UFUNCTION(BlueprintCallable)
    void SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
    

    // Fix for true pure virtual functions not being implemented
};

