#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Material.h"
#include "MM_Slot_DungeonMaterial.generated.h"

class UMirCanvasPanel;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_DungeonMaterial : public UMM_Slot_Material {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_canBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_imgBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txtBand;
    
public:
    UMM_Slot_DungeonMaterial();

};

