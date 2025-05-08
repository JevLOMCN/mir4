#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavFilter_AIControllerDefault.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UNavFilter_AIControllerDefault : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_AIControllerDefault();

};

