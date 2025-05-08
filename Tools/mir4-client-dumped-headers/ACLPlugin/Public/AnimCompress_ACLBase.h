#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimCompress -FallbackName=AnimCompress
#include "AnimCompress_ACLBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAnimCompress_ACLBase : public UAnimCompress {
    GENERATED_BODY()
public:
    UAnimCompress_ACLBase();

};

