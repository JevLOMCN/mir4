#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharAbility_Info_Magicstone.generated.h"

class UMM_MagicStoneCircleSlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharAbility_Info_Magicstone : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_MagicStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MagicStoneCircleSlot* m_MagicStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MagicStoneCircleSlot*> m_MagicStones;
    
    UMM_CharAbility_Info_Magicstone();

};

