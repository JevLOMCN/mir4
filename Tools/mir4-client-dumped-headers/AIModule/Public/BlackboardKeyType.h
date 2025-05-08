#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlackboardKeyType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType : public UObject {
    GENERATED_BODY()
public:
    UBlackboardKeyType();

};

