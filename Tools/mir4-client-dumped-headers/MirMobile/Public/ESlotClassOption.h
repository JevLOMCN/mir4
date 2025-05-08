#pragma once
#include "CoreMinimal.h"
#include "ESlotClassOption.generated.h"

UENUM(BlueprintType)
enum class ESlotClassOption : uint8 {
    Slot_All,
    Slot_Warror,
    Slot_Magician,
    Slot_Taoist,
    Slot_Assassin,
    Slot_Berserker,
    Slot_Lock = 99,
};

