#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ListViewDesignerPreviewItem.generated.h"

UCLASS(Blueprintable, Transient, Within=ListView)
class UListViewDesignerPreviewItem : public UObject {
    GENERATED_BODY()
public:
    UListViewDesignerPreviewItem();

};

