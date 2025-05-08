#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "WidgetBase.h"
#include "MM_Relation_RewardInfo_Slot.generated.h"

class UMM_Slot_Material;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Relation_RewardInfo_Slot : public UWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* m_SlotMaterialReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtItemCount;
    
public:
    UMM_Relation_RewardInfo_Slot();


    // Fix for true pure virtual functions not being implemented
};

