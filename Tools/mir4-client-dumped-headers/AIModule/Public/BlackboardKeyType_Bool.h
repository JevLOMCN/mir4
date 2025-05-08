#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Bool.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_Bool : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UBlackboardKeyType_Bool();

};

