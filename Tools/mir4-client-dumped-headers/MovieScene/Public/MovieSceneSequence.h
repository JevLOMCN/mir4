#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneEvaluationTemplate.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneSequence.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UMovieSceneSequence : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode DefaultCompletionMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParentContextsAreSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayableDirectly;
    
public:
    UMovieSceneSequence();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;
    
};

