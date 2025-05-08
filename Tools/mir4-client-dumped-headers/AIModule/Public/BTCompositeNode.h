#pragma once
#include "CoreMinimal.h"
#include "BTCompositeChild.h"
#include "BTNode.h"
#include "BTCompositeNode.generated.h"

class UBTService;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTCompositeNode : public UBTNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBTCompositeChild> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBTService*> Services;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDecoratorScope: 1;
    
public:
    UBTCompositeNode();

};

