#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VisualLoggerExtension.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UVisualLoggerExtension : public UObject {
    GENERATED_BODY()
public:
    UVisualLoggerExtension();

};

