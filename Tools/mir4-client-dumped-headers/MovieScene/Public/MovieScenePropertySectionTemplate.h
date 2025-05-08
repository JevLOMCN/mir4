#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplate.h"
#include "MovieScenePropertySectionData.h"
#include "MovieScenePropertySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertySectionData PropertyData;
    
public:
    FMovieScenePropertySectionTemplate();
};

