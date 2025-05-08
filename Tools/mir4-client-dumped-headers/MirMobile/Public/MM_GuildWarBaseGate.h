#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGateFactionType.h"
#include "MM_GuildWarBaseGate.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AMM_GuildWarBaseGate : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGateFactionType m_FactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BaseGateCollision;
    
public:
    AMM_GuildWarBaseGate(const FObjectInitializer& ObjectInitializer);

};

