#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudSkillDeck.generated.h"

class UCanvasPanel;
class UMM_Btn_HudSkill;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudSkillDeck : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pDeckPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Btn_HudSkill*> m_pHudBtnSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pAniChangeDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeDeckButtonEffectTime;
    
    UMM_HudSkillDeck();

};

