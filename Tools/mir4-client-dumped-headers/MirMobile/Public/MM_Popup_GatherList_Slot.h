#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_GatherList_Slot.generated.h"

class UMM_Slot_Material;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_GatherList_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* m_ItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_ItemName;
    
public:
    UMM_Popup_GatherList_Slot();

};

