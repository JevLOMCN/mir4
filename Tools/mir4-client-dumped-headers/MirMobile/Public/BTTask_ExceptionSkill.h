#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SkillCondition.h"
#include "BTTask_ExceptionSkill.generated.h"

UCLASS(Blueprintable)
class UBTTask_ExceptionSkill : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillCondition> Conditions;
    
    UBTTask_ExceptionSkill();

};

