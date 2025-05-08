#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_RecommendEquip.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_RecommendEquip : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_GUIDE_MESSAGE_CHANGEEQUIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_COMBAT_POINT_TITLE;
    
public:
    UMM_UIAction_RecommendEquip();

};

