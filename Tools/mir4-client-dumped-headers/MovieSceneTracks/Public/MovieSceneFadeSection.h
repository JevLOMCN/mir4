#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MovieSceneFloatSection.h"
#include "MovieSceneFadeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneFadeSection : public UMovieSceneFloatSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFadeAudio: 1;
    
    UMovieSceneFadeSection();

};

