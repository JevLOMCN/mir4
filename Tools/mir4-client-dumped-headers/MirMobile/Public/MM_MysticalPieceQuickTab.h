#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_MysticalPieceQuickTab.generated.h"

class UMM_MysticalPieceQuickSlotBtn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MysticalPieceQuickTab : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MysticalPieceQuickSlotBtn* m_arQuickBtn[5];
    
public:
    UMM_MysticalPieceQuickTab();

};

