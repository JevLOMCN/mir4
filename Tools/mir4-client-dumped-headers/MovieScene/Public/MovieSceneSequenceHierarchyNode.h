#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSequenceHierarchyNode.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceHierarchyNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneSequenceID> Children;
    
    MOVIESCENE_API FMovieSceneSequenceHierarchyNode();
};

