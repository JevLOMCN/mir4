#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEventTemplateBase.h"
#include "MovieSceneEventTriggerTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEventPtrs> Events;
    
    MOVIESCENETRACKS_API FMovieSceneEventTriggerTemplate();
};

