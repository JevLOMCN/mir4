#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ChaosSolverSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class CHAOSSOLVERENGINE_API UChaosSolverSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath DefaultChaosSolverActorClass;
    
    UChaosSolverSettings();

};

