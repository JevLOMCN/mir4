#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Skill_DeckSetting.generated.h"

class UMM_Skill_DeckBtnTab;
class UMM_Skill_DeckSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Skill_DeckSetting : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Skill_DeckBtnTab* m_arDeckBtn[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UMM_Skill_DeckSlot*> m_MapSkillSlot;
    
public:
    UMM_Skill_DeckSetting();

};

