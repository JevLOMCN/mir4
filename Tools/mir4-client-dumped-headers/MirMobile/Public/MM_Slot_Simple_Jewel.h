#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Base.h"
#include "MM_Slot_Simple_Jewel.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Simple_Jewel : public UMM_Slot_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_JewelLock;
    
public:
    UMM_Slot_Simple_Jewel();

};

