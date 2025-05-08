#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Class.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_Class : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
    UBlackboardKeyType_Class();

};

