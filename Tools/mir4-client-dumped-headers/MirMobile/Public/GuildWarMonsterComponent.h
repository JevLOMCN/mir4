#pragma once
#include "CoreMinimal.h"
#include "MonsterEntityComponent.h"
#include "GuildWarMonsterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGuildWarMonsterComponent : public UMonsterEntityComponent {
    GENERATED_BODY()
public:
    UGuildWarMonsterComponent(const FObjectInitializer& ObjectInitializer);

};

