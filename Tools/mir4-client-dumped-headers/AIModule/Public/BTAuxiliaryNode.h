#pragma once
#include "CoreMinimal.h"
#include "BTNode.h"
#include "BTAuxiliaryNode.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTAuxiliaryNode : public UBTNode {
    GENERATED_BODY()
public:
    UBTAuxiliaryNode();

};

