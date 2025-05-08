#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "ELevelVisibility.h"
#include "MovieSceneLevelVisibilitySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNames;
    
public:
    MOVIESCENETRACKS_API FMovieSceneLevelVisibilitySectionTemplate();
};

