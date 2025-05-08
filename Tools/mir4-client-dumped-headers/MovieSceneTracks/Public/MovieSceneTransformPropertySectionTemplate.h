#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
#include "MovieScene3DTransformTemplateData.h"
#include "MovieSceneTransformPropertySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScene3DTransformTemplateData TemplateData;
    
public:
    MOVIESCENETRACKS_API FMovieSceneTransformPropertySectionTemplate();
};

