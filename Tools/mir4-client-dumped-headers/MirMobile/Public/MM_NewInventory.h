#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_NewInventory.generated.h"

class UMM_Common_Board_Notice;
class UMirScrollBox;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Wrap_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetBase*> m_arSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_BoardNotice;
    
public:
    UMM_NewInventory();

    UFUNCTION()
    void ClickedSlot(int64 iUID, int32 iTID, int32 iEquipPos);
    
};

