#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Visual.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class UMG_API UVisual : public UObject {
    GENERATED_BODY()
public:
    UVisual();

};

