#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioCaptureProtocolBase.h"
#include "MasterAudioSubmixCaptureProtocol.generated.h"

UCLASS(Blueprintable, Config=Engine)
class MOVIESCENECAPTURE_API UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
public:
    UMasterAudioSubmixCaptureProtocol();

};

