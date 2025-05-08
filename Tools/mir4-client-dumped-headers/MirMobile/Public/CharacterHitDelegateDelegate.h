#pragma once
#include "CoreMinimal.h"
#include "CharacterHitDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterHitDelegate, int64, AttackerUID, int32, AttackID, int32, Damage);

