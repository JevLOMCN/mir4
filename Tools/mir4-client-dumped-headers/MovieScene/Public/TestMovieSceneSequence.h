#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequence.h"
#include "TestMovieSceneSequence.generated.h"

class UMovieScene;

UCLASS(Blueprintable, MinimalAPI)
class UTestMovieSceneSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
    UTestMovieSceneSequence();

};

