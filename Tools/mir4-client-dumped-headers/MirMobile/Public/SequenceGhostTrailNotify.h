#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "GhostTrailData.h"
#include "SequenceGhostTrailNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USequenceGhostTrailNotify : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhostTrailData m_GhostChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhostTrailData m_GhostWpn;
    
    USequenceGhostTrailNotify();

};

