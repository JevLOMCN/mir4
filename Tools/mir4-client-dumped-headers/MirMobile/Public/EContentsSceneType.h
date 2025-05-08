#pragma once
#include "CoreMinimal.h"
#include "EContentsSceneType.generated.h"

UENUM(BlueprintType)
enum class EContentsSceneType : uint8 {
    NONE,
    Force,
    Equip,
    Mastery,
    Vehicle,
    Customizing,
    Costume,
    CharacterSelect,
    ClassSelect,
    Pet,
    HolyStuff,
    Costume_Uniform,
};

