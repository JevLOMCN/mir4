#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PetGradeUp_InfoSlot.generated.h"

class UMM_PetAbilitySlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PetGradeUp_InfoSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_EquipSlotCount;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PetAbilitySlot* m_arSkillSlot[4];
    
public:
    UMM_PetGradeUp_InfoSlot();

};

