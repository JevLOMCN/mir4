#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PieceItemSlot.generated.h"

class UMM_Slot_Material;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PieceItemSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Effect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* m_PieceItemSlot;
    
public:
    UMM_PieceItemSlot();

};

