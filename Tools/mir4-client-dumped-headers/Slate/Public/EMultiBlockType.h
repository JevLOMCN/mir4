#pragma once
#include "CoreMinimal.h"
#include "EMultiBlockType.generated.h"

UENUM(BlueprintType)
enum class EMultiBlockType : uint8 {
    None,
    ButtonRow,
    EditableText,
    Heading,
    MenuEntry,
    MenuSeparator,
    ToolBarButton,
    ToolBarComboButton,
    ToolBarSeparator,
    Widget,
};

