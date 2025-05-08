#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UserDefinedStruct -FallbackName=UserDefinedStruct
#include "AISenseBlueprintListener.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UAISenseBlueprintListener : public UUserDefinedStruct {
    GENERATED_BODY()
public:
    UAISenseBlueprintListener();

};

