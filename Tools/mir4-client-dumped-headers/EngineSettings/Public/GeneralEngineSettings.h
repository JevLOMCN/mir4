#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeneralEngineSettings.generated.h"

UCLASS(Blueprintable)
class ENGINESETTINGS_API UGeneralEngineSettings : public UObject {
    GENERATED_BODY()
public:
    UGeneralEngineSettings();

};

