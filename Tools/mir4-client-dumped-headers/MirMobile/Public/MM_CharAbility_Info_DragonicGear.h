#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharAbility_Info_DragonicGear.generated.h"

class UMM_Slot_Inventory;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharAbility_Info_DragonicGear : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_DragonicGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Inventory*> m_Slot_DragonicGears;
    
    UMM_CharAbility_Info_DragonicGear();

};

