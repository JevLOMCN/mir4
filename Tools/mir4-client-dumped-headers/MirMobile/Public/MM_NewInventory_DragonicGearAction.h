#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_NewInventory_DragonicGearAction.generated.h"

class UMM_Common_Btn;
class UMM_SortListBtn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory_DragonicGearAction : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SortListBtn* m_SortListBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_AutoEquip;
    
public:
    UMM_NewInventory_DragonicGearAction();

    UFUNCTION(BlueprintCallable)
    void ShowAutoEquip();
    
};

