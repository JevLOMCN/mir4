#pragma once
#include "CoreMinimal.h"
#include "EOccupationCategoryType.generated.h"

UENUM()
enum class EOccupationCategoryType {
    NONE = -1,
    State = 0,
    Auction,
    GovernmentOffice,
    PayrollManagement,
    TaxInformation,
    AreaManagement,
};

