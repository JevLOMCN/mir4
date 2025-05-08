#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneEvalTemplateBase.h"
#include "MovieSceneEvalTemplate.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode CompletionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;
    
public:
    MOVIESCENE_API FMovieSceneEvalTemplate();
};

