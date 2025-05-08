#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_HudRightMenu.generated.h"

class UButton;
class UMM_Common_Btn_Symbol;
class UMM_HudBtnMenu;
class UMM_HudQuestList;
class UMirButton;
class UMirCanvasPanel;
class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_HudRightMenu : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStringID_ExitPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStringID_BtnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStringID_BtnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStringID_ExitDungeon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudQuestList* m_pQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnMenu* m_pBtnGiveUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnMenu* m_pPhaseExitMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pBtnFoldQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_pConquerServerPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pConquerExitBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pConquerRemainTimeTxt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pConquerRemainLifeItemTxt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pConquerUseLifeItemBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_canConquerGetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnConquerGetItem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniFoldQuest;
    
    UMM_B_HudRightMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnExitCurWorld();
    
    UFUNCTION(BlueprintCallable)
    void OnClickUseLifeItem();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFoldQuest();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedWorldOut();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedPhaseExitPopupExit();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConquerServerExit();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConquerGetItemInfo();
    
};

