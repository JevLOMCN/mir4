#pragma once
#include "CoreMinimal.h"
#include "ETouchIndex.generated.h"

UENUM(BlueprintType)
namespace ETouchIndex {
    enum Type {
        Touch1,
        Touch2,
        Touch3,
        Touch4,
        Touch5,
        Touch6,
        Touch7,
        Touch8,
        Touch9,
        Touch10,
        CursorPointerIndex,
        MAX_TOUCHES,
    };
}

