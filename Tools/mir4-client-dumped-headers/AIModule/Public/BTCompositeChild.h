#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorLogic.h"
#include "BTCompositeChild.generated.h"

class UBTCompositeNode;
class UBTDecorator;
class UBTTaskNode;

USTRUCT(BlueprintType)
struct FBTCompositeChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBTCompositeNode* ChildComposite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBTTaskNode* ChildTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBTDecorator*> Decorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBTDecoratorLogic> DecoratorOps;
    
    AIMODULE_API FBTCompositeChild();
};

