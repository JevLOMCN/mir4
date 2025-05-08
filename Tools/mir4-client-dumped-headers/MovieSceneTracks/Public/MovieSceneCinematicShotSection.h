#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
#include "MovieSceneCinematicShotSection.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShotDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
public:
    UMovieSceneCinematicShotSection();

    UFUNCTION(BlueprintCallable)
    void SetShotDisplayName(const FString& InShotDisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShotDisplayName() const;
    
};

