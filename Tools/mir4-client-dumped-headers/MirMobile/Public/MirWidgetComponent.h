#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "MirWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMirWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UMirWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

