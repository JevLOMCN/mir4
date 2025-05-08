#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneObjectPropertyTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PropertyClass;
    
    UMovieSceneObjectPropertyTrack();

};

