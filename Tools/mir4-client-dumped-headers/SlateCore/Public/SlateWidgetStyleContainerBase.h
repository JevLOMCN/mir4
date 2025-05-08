#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateWidgetStyleContainerInterface.h"
#include "SlateWidgetStyleContainerBase.generated.h"

UCLASS(Blueprintable)
class SLATECORE_API USlateWidgetStyleContainerBase : public UObject, public ISlateWidgetStyleContainerInterface {
    GENERATED_BODY()
public:
    USlateWidgetStyleContainerBase();


    // Fix for true pure virtual functions not being implemented
};

