#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationSystemConfig -FallbackName=NavigationSystemConfig
#include "NavigationSystemModuleConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class NAVIGATIONSYSTEM_API UNavigationSystemModuleConfig : public UNavigationSystemConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStrictlyStatic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateOnClient: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoSpawnMissingNavData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnNavDataInNavBoundsLevel: 1;
    
public:
    UNavigationSystemModuleConfig();

};

