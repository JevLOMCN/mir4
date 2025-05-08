#pragma once
#include "CoreMinimal.h"
#include "EReason_UpdateTarget.generated.h"

UENUM(BlueprintType)
enum class EReason_UpdateTarget : uint8 {
    Unknown,
    SharedTarget,
    TargetHide,
    Invalid,
    Clear,
    Search,
    HasInput,
    Renew,
    CounterClear,
    AttackMe,
    UneanbleRender,
    FindEnemy,
    Quest,
    Around,
    SkipTrace,
    Die,
    UneablePK,
    TargetList,
    TargetLock,
    SubMenuAttack,
    InSafeArea,
    SelfComeback,
    AttackHeightLimit,
};

