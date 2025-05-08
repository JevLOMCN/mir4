#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolMenuBase.generated.h"

UCLASS(Abstract, Blueprintable)
class SLATE_API UToolMenuBase : public UObject {
    GENERATED_BODY()
public:
    UToolMenuBase();

};

