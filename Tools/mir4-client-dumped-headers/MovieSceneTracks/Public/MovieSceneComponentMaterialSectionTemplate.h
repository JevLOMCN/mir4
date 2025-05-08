#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneComponentMaterialSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    MOVIESCENETRACKS_API FMovieSceneComponentMaterialSectionTemplate();
};

