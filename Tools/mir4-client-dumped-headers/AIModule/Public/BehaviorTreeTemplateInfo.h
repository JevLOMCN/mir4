#pragma once
#include "CoreMinimal.h"
#include "BehaviorTreeTemplateInfo.generated.h"

class UBTCompositeNode;
class UBehaviorTree;

USTRUCT(BlueprintType)
struct FBehaviorTreeTemplateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBTCompositeNode* Template;
    
    AIMODULE_API FBehaviorTreeTemplateInfo();
};

