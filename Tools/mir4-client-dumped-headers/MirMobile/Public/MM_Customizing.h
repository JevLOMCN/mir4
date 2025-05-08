#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing.generated.h"

class UButton;
class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Customizing_Component;
class UMM_Customizing_CreatePopup;
class UMM_Customizing_Palette;
class UMM_Customizing_Save;
class UMirButton;
class UMirTextBlock;
class UPanelWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_UpStyleHairPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_LookPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_UIPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_SaveLoadPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_RevertPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_UndoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_RedoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pPresetPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pCategoryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pComponentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_Save* m_pSaveLoadWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_Component* m_pComponentListPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_Palette* m_pComponentPalettePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pSaveLoadLeftPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pTopPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pLeftTopPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pDetailControlButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pCostumeDyeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_pCostumeDyePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pRevertButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pTempSaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pUndoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pRedoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pShowUIButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pHideUIButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pLookCameraImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pUpStyleHairImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pLookCameraBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pUpStyleHairBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pSaveLoadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pBackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pSaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pLoadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pStyleBookButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pScreenShootButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pClassCreateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pFaceJobButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_CreatePopup* m_pCreatePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Show_DetailControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Hide_DetailControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Show_DetailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Hide_DetailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Show_SaveLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Hide_SaveLoad;
    
    UMM_Customizing();

    UFUNCTION(BlueprintCallable)
    void UpdateCustomizingDataEvent();
    
    UFUNCTION(BlueprintCallable)
    void ShowSaveLoadComponent(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void ShowFinishBtn(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void ShowComponentPalette(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPresetShowAnimation(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenCustomizingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDetailControlShowAnimation(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDetailComponentShowAnimation(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void OnUpStyleHair();
    
    UFUNCTION(BlueprintCallable)
    void OnClickUndo();
    
    UFUNCTION(BlueprintCallable)
    void OnClickTempSave();
    
    UFUNCTION(BlueprintCallable)
    void OnClickStyleBook();
    
    UFUNCTION(BlueprintCallable)
    void OnClickShowUI();
    
    UFUNCTION(BlueprintCallable)
    void OnClickScreenShoot();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSaveLoadButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSaveData();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRevert();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRedo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickMoveToClassSelectEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLookCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLoadData();
    
    UFUNCTION(BlueprintCallable)
    void OnClickHideUI();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFinishButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDetailControl();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCostumeDye();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCharacterSide();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCharacterForward();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBackButton();
    
    UFUNCTION(BlueprintCallable)
    void MoveToClassSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToCharacterSelectEvent(bool bPresetMode);
    
    UFUNCTION(BlueprintCallable)
    void MoveToCharacterSelect();
    
    UFUNCTION(BlueprintCallable)
    void FaceJobButton();
    
    UFUNCTION(BlueprintCallable)
    void ClassCreateButton();
    
    UFUNCTION(BlueprintCallable)
    void CharacterCreateComplete();
    
};

