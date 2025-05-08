#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState_Trail -FallbackName=AnimNotifyState_Trail
#include "TrailAnimNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MIRMOBILE_API UTrailAnimNotifyState : public UAnimNotifyState_Trail {
    GENERATED_BODY()
public:
    UTrailAnimNotifyState();

};

