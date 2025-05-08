#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharAbility_Info_Mystical.generated.h"

class UMM_MysticalPieceSquareSlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharAbility_Info_Mystical : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_MysticalPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MysticalPieceSquareSlot*> m_MysticalPieces;
    
    UMM_CharAbility_Info_Mystical();

};

