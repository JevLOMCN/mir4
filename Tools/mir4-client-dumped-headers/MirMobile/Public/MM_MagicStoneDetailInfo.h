#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_MagicStoneDetailInfo.generated.h"

class UMM_MagicStone_AttributeSlot;
class UMM_Slot_Material;
class UMirCanvasPanel;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MagicStoneDetailInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* magic_stone_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_transcend_step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MagicStone_AttributeSlot*> lst_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* cp_contents;
    
public:
    UMM_MagicStoneDetailInfo();

};

