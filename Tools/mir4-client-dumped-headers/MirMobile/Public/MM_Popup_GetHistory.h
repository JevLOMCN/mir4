#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_GetHistory.generated.h"

class UInventorySlotObj;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Slot_GetHistory;
class UMirButton;
class UMirRichTextBlock;
class UMirScrollBox;
class UMirTextBlock;
class UMirTileView;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_GetHistory : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCol_GetItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMinRow_GetItemList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_ScreenBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_GetItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hrz_Empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTileView* m_TileView_GetItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_GetCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_GetHistory*> m_arSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventorySlotObj*> m_arGetItemSlotObj;
    
public:
    UMM_Popup_GetHistory();

    UFUNCTION(BlueprintCallable)
    void OnClick_ScreenBg();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Confirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Close();
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};

