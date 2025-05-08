#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Guild_Dev.generated.h"

class UMM_CommonVerticalTabSet;
class UMM_Guild_DevList;
class UMM_Guild_Dev_DrawLines;
class UMM_Guild_Dev_Slot_SkillUse;
class UMirImage;
class UMirRichTextBlock;
class UMirScrollBox;
class UPanelWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Guild_Dev : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_GuildDevStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_VerticalTabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_DevList*> m_arGuildDevList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_Dev_DrawLines* m_GuildDrawLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Txt_TimeTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Panel_Dev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Panel_SkillUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_Dev_Slot_SkillUse*> m_arGuildSkillUseList;
    
    UMM_Guild_Dev();

    UFUNCTION(BlueprintCallable)
    void OnClickedVerticalTabBtn(int32 verticalIndex, bool bLocked);
    
};

