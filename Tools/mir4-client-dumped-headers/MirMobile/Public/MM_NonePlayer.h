#pragma once
#include "CoreMinimal.h"
#include "MM_CharacterPawnBase.h"
#include "MM_NonePlayer.generated.h"

UCLASS(Abstract, Blueprintable)
class AMM_NonePlayer : public AMM_CharacterPawnBase {
    GENERATED_BODY()
public:
    AMM_NonePlayer(const FObjectInitializer& ObjectInitializer);

};

