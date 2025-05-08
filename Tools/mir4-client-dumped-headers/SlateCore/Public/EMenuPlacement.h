#pragma once
#include "CoreMinimal.h"
#include "EMenuPlacement.generated.h"

UENUM(BlueprintType)
enum EMenuPlacement {
    MenuPlacement_BelowAnchor,
    MenuPlacement_CenteredBelowAnchor,
    MenuPlacement_BelowRightAnchor,
    MenuPlacement_ComboBox,
    MenuPlacement_ComboBoxRight,
    MenuPlacement_MenuRight,
    MenuPlacement_AboveAnchor,
    MenuPlacement_CenteredAboveAnchor,
    MenuPlacement_AboveRightAnchor,
    MenuPlacement_MenuLeft,
    MenuPlacement_Center,
    MenuPlacement_RightLeftCenter,
    MenuPlacement_MatchBottomLeft,
};

