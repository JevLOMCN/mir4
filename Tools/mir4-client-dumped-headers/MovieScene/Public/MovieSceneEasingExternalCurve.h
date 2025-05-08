#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEasingFunction.h"
#include "MovieSceneEasingExternalCurve.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneEasingExternalCurve : public UObject, public IMovieSceneEasingFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UMovieSceneEasingExternalCurve();


    // Fix for true pure virtual functions not being implemented
};

