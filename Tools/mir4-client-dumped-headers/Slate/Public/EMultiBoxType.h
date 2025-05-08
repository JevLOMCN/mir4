#pragma once
#include "CoreMinimal.h"
#include "EMultiBoxType.generated.h"

UENUM(BlueprintType)
enum class EMultiBoxType : uint8 {
    MenuBar,
    ToolBar,
    VerticalToolBar,
    Menu,
    ButtonRow,
    ToolMenuBar,
};

