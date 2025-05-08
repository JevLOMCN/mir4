#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_MagicStone_EquipedDetailInfo.generated.h"

class UHorizontalBox;
class UMM_MagicStone_AttributeSlot;
class UMM_Slot_Material;
class UMirCanvasPanel;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MagicStone_EquipedDetailInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* magic_stone_selected_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MagicStone_AttributeSlot*> lst_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* cp_contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* hb_empty;
    
public:
    UMM_MagicStone_EquipedDetailInfo();

};

