#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharAbility_Info_Skill.generated.h"

class UMM_Skill_DeckSlot;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_CharAbility_Info_Skill : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Skill_DeckSlot*> arrSkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Skill_DeckSlot* SkillSlot_Special;
    
public:
    UMM_CharAbility_Info_Skill();

};

