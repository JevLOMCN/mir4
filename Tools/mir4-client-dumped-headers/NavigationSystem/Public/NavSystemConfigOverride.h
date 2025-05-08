#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ENavSystemOverridePolicy.h"
#include "NavSystemConfigOverride.generated.h"

class UNavigationSystemConfig;

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API ANavSystemConfigOverride : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationSystemConfig* NavigationSystemConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavSystemOverridePolicy OverridePolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoadOnClient: 1;
    
public:
    ANavSystemConfigOverride(const FObjectInitializer& ObjectInitializer);

};

