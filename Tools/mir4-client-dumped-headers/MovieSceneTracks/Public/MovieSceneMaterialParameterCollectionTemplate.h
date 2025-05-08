#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneMaterialParameterCollectionTemplate.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
public:
    MOVIESCENETRACKS_API FMovieSceneMaterialParameterCollectionTemplate();
};

