#pragma once
#include "CoreMinimal.h"
#include "EMiniGameSoundType.generated.h"

UENUM(BlueprintType)
enum class EMiniGameSoundType : uint8 {
    Bgm_Wait,
    Bgm_Battle,
    Player_Atk1,
    Player_Atk2,
    Player_Atk3,
    Player_Avoid,
    Player_Hit,
    Monster_Atk1,
    Monster_Atk2,
    Monster_Hit,
    System_NextWave,
};

