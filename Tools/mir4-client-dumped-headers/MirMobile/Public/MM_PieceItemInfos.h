#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PieceItemInfos.generated.h"

class UMM_PieceItemSlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PieceItemInfos : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_PieceItemSlot*> m_PieceSlots;
    
public:
    UMM_PieceItemInfos();

};

