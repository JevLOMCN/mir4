#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EditableMeshAdapter.generated.h"

UCLASS(Abstract, Blueprintable)
class EDITABLEMESH_API UEditableMeshAdapter : public UObject {
    GENERATED_BODY()
public:
    UEditableMeshAdapter();

};

