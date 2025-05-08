#pragma once
#include "CoreMinimal.h"
#include "MM_QuestBaseMsg.h"
#include "MM_Hud_QuestMessage.generated.h"

class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_QuestMessage : public UMM_QuestBaseMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hor_NormalBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hor_NormalLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hor_RelationBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hor_RelationLine;
    
    UMM_Hud_QuestMessage();

};

