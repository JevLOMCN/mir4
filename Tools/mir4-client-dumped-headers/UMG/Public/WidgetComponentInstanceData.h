#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponentInstanceData -FallbackName=SceneComponentInstanceData
#include "WidgetComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UMG_API FWidgetComponentInstanceData();
};

