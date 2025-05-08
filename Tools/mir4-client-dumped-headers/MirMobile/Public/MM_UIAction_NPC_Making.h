#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_NPC_Making.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_NPC_Making : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MAX_MATERIAL_NUM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_CurrentGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SelectedMakeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_MSG_NOTENOUGH_LEVEL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NotEnoughMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NotEnoughCost;
    
public:
    UMM_UIAction_NPC_Making();

};

