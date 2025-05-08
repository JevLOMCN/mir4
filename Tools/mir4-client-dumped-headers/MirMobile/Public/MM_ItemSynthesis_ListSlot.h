#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemSynthesis_ListSlot.generated.h"

class UEffectWidgetBase;
class UGridPanel;
class UMM_Slot_Material;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemSynthesis_ListSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGridPanel* m_Grid_Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* m_Slot_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* m_Effect;
    
public:
    UMM_ItemSynthesis_ListSlot();

};

