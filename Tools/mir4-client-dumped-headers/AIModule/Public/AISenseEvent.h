#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AISenseEvent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class AIMODULE_API UAISenseEvent : public UObject {
    GENERATED_BODY()
public:
    UAISenseEvent();

};

