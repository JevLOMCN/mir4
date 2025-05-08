#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PetQuickTab.generated.h"

class UMM_PetQuickSlotBtn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PetQuickTab : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PetQuickSlotBtn* m_arQuickBtn[5];
    
public:
    UMM_PetQuickTab();

};

