#pragma once
#include "CoreMinimal.h"
#include "EVerticalItemGrade.generated.h"

UENUM(BlueprintType)
enum class EVerticalItemGrade : uint8 {
    None,
    AutoMake,
    AutoMake_No_Normal,
    Only_Normal,
    Only_Magic,
    Only_Rare,
    Only_Epic,
    Only_Legend,
};

