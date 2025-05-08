#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "MM_NavigationQueryFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class UMM_NavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSearchNodes;
    
public:
    UMM_NavigationQueryFilter();

};

