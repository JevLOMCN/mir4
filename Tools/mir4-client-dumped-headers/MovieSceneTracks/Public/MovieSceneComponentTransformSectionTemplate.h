#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieScene3DTransformTemplateData.h"
#include "MovieSceneComponentTransformSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScene3DTransformTemplateData TemplateData;
    
    MOVIESCENETRACKS_API FMovieSceneComponentTransformSectionTemplate();
};

