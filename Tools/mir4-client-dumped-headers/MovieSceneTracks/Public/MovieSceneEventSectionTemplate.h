#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSectionData.h"
#include "MovieSceneEventTemplateBase.h"
#include "MovieSceneEventSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventSectionData EventData;
    
    MOVIESCENETRACKS_API FMovieSceneEventSectionTemplate();
};

