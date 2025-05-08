#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkDefinition -FallbackName=NavLinkDefinition
#include "NavLinkTrivial.generated.h"

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API UNavLinkTrivial : public UNavLinkDefinition {
    GENERATED_BODY()
public:
    UNavLinkTrivial();

};

