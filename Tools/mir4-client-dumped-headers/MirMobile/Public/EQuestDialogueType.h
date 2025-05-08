#pragma once
#include "CoreMinimal.h"
#include "EQuestDialogueType.generated.h"

UENUM(BlueprintType)
enum class EQuestDialogueType : uint8 {
    None,
    MainQuest,
    RelationQuest,
    RequestQuest,
};

