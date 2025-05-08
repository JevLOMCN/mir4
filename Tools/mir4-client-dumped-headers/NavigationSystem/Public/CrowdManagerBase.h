#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CrowdManagerBase.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class NAVIGATIONSYSTEM_API UCrowdManagerBase : public UObject {
    GENERATED_BODY()
public:
    UCrowdManagerBase();

};

