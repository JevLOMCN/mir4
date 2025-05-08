#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_NewInventoryTab.generated.h"

class UMM_NewInventoryTab_Slot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventoryTab : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_NewInventoryTab_Slot*> m_arTab;
    
public:
    UMM_NewInventoryTab();

};

