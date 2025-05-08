#pragma once
#include "CoreMinimal.h"
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneComponentMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    UMovieSceneComponentMaterialTrack();

};

