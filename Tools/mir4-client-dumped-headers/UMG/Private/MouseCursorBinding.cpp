#include "MouseCursorBinding.h"

UMouseCursorBinding::UMouseCursorBinding() {
}

TEnumAsByte<EMouseCursor::Type> UMouseCursorBinding::GetValue() const {
    return EMouseCursor::None;
}


