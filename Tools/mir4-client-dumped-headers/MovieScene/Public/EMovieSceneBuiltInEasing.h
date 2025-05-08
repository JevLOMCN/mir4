#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBuiltInEasing.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneBuiltInEasing : uint8 {
    Linear,
    SinIn,
    SinOut,
    SinInOut,
    QuadIn,
    QuadOut,
    QuadInOut,
    CubicIn,
    CubicOut,
    CubicInOut,
    QuartIn,
    QuartOut,
    QuartInOut,
    QuintIn,
    QuintOut,
    QuintInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    CircIn,
    CircOut,
    CircInOut,
};

