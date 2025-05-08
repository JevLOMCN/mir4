#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingInputEvent.generated.h"

UENUM(BlueprintType)
enum class ESlateDebuggingInputEvent : uint8 {
    MouseMove,
    MouseEnter,
    MouseLeave,
    MouseButtonDown,
    MouseButtonUp,
    MouseButtonDoubleClick,
    MouseWheel,
    TouchStart,
    TouchEnd,
    DragDetected,
    DragEnter,
    DragLeave,
    DragOver,
    DragDrop,
    DropMessage,
    KeyDown,
    KeyUp,
    KeyChar,
    AnalogInput,
    TouchGesture,
    COUNT,
};

