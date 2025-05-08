#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Material_Item.h"
#include "MM_Slot_Material_CircleA.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Material_CircleA : public UMM_Slot_Material_Item {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Smelt;
    
    UMM_Slot_Material_CircleA();

};

