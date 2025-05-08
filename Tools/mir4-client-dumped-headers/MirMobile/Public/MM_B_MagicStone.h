#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_MagicStone.generated.h"

class UMM_Common_Btn;
class UMM_MagicStoneDetailInfo;
class UMM_MagicStoneEquip;
class UMM_MagicStoneQuickTab;
class UMM_NewInventory_MagicStone;
class UMM_Popup_MagicStone_Attribute;
class UMM_SortListBtn;
class UMirButton;
class UMirCanvasPanel;
class UMirTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_MagicStone : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory_MagicStone* inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_go_to_compose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MagicStoneEquip* magic_stone_equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_MagicStone_Attribute* popup_attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SortListBtn* btn_sort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MagicStoneDetailInfo* detail_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_select_deckIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_select_deck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_forge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_deck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_transcend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* transcend_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MagicStoneQuickTab* quick_tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* cp_quick_tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* cp_quick_tab_bg;
    
public:
    UMM_B_MagicStone();

    UFUNCTION(BlueprintCallable)
    void OnClickTranscendButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGoToCompose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickEquip();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDeckButton();
    
};

