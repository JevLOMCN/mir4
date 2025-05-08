#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_AcquiredItem.generated.h"

class UMM_Common_Btn_Symbol;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_AcquiredItem : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* sb_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
public:
    UMM_PopUp_AcquiredItem();

    UFUNCTION(BlueprintCallable)
    void OnClickedClose();
    
};

