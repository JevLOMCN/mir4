#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SkillCondition.h"
#include "BTTask_PreSelectSkill.generated.h"

UCLASS(Blueprintable)
class UBTTask_PreSelectSkill : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillCondition> Conditions;
    
    UBTTask_PreSelectSkill();

};

