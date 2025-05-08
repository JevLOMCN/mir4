#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDirectiveType.h"
#include "MM_SituationDirectiveEffect.generated.h"

UCLASS(Blueprintable)
class AMM_SituationDirectiveEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDirectiveType, int32> EffectId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDirectiveType CurrentType;
    
public:
    AMM_SituationDirectiveEffect(const FObjectInitializer& ObjectInitializer);

};

