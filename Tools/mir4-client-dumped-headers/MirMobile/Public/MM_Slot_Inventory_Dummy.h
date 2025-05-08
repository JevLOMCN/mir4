#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Slot_Inventory_Dummy.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Inventory_Dummy : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Image_BG;
    
public:
    UMM_Slot_Inventory_Dummy();

};

