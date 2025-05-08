#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NavigationGraphNode.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ANavigationGraphNode : public AActor {
    GENERATED_BODY()
public:
    ANavigationGraphNode(const FObjectInitializer& ObjectInitializer);

};

