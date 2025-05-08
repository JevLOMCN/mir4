#pragma once
#include "CoreMinimal.h"
#include "EMail_AddressbookTab.generated.h"

UENUM()
enum class EMail_AddressbookTab : int32 {
    eTab_None,
    eTab_Friend,
    eTab_Guild,
};

