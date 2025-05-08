#pragma once
#include "CoreMinimal.h"
#include "NodeHierarchyData.h"
#include "NodeHierarchyWithUserData.generated.h"

USTRUCT(BlueprintType)
struct FNodeHierarchyWithUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNodeHierarchyData Hierarchy;
    
public:
    ANIMATIONCORE_API FNodeHierarchyWithUserData();
};

