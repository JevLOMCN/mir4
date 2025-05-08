#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_MysticalPiece.generated.h"

class UCanvasPanel;
class UImage;
class UMM_CombatPoint;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Inventory_MysticalPiece;
class UMM_MysticalPieceQuickTab;
class UMM_MysticalPieceSlot;
class UMM_Mystical_ItemInfo_Ability;
class UMM_Popup_MysticalPieces_Infos;
class UMM_Slot_Inventory;
class UMirButton;
class UMirCanvasPanel;
class UMirImage;
class UMirRichTextBlock;
class UMirTextBlock;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_MysticalPiece : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_RenderTargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CombatPoint* m_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_SelectDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MysticalPieceQuickTab* m_DeckTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_SelectDeckIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_SelectDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_Can_GoToTranscend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Transcend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_GoToTranscend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Transcend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirCanvasPanel*> m_Can_EquipSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirImage*> m_Img_EquipBGs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MysticalPieceSlot*> m_EquipSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* m_Overlay_Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Inventory* m_Slot_MysticalPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Rtxt_DescTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Rtxt_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Mystical_ItemInfo_Ability* m_ItemInfo_Passive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Mystical_ItemInfo_Ability*> m_ItemInfo_Abilitys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Inventory_MysticalPiece* m_Inven_MysticalPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_DetailInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_MysticalPieces_Infos* m_Popup_Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_ItemInfoBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Lock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_DecShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_DecHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_SlotOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_InvenOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRID_MSG_LOCK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRID_MSG_UNLOCK;
    
public:
    UMM_B_MysticalPiece();

    UFUNCTION(BlueprintCallable)
    void OnClickUnEuquipSlot(int32 slot_index_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUnEquipBySlot();
    
    UFUNCTION(BlueprintCallable)
    void OnClickUnEquip();
    
    UFUNCTION(BlueprintCallable)
    void OnClickTranscendButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLockNUnLock();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGoToCompose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickEquipSlot(int32 slot_index_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickEquip();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDetailInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDeckButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCloseDetainInfo();
    
};

