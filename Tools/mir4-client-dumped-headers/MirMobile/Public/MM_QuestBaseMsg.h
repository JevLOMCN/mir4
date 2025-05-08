#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_QuestBaseMsg.generated.h"

class UMirRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_QuestBaseMsg : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Txt_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RARE_QUEST_ICON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HERO_QUEST_ICON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LEGEND_QUEST_ICON;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_OpenAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_CloseAni;
    
public:
    UMM_QuestBaseMsg();

};

