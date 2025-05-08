#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "StageCommonTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FStageCommonTemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    FStageCommonTemplate();
};

