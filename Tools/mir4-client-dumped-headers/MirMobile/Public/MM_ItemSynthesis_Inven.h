#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemSynthesis_Inven.generated.h"

class UMM_Slot_Base;
class UMirScrollBox;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemSynthesis_Inven : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MIN_SLOT_COUNT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_SLOT_LINE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Wrap_Main;
    
public:
    UMM_ItemSynthesis_Inven();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot(UMM_Slot_Base* pSlot);
    
};

