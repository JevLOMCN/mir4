#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneExpansionState.h"
#include "MovieSceneEditorData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEditorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMovieSceneExpansionState> ExpansionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PinnedNodes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ViewStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ViewEnd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WorkStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WorkEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FFrameNumber> MarkedFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange WorkingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ViewRange;
    
    MOVIESCENE_API FMovieSceneEditorData();
};

