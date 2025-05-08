#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_MagicStoneEquip.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_MagicStone_EquipedSlot;
class UMirImage;
class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MagicStoneEquip : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MagicStone_EquipedSlot*> magic_stone_equip_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_combat_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_popup_attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* animation_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* img_rainbow_cover;
    
public:
    UMM_MagicStoneEquip();

    UFUNCTION(BlueprintCallable)
    void OnClickUnmountSlot(int32 slot_index_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlot(int32 slot_index_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickPopupAttribute();
    
};

