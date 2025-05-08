#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Material.h"
#include "MM_Slot_Material_Reward.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Material_Reward : public UMM_Slot_Material {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgComplete;
    
public:
    UMM_Slot_Material_Reward();

};

