#pragma once
#include "CoreMinimal.h"
#include "MM_GameOption_BaseSlot.h"
#include "MM_GameOption_Switch.generated.h"

class UCheckBox;
class UMirButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_Switch : public UMM_GameOption_BaseSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Txt_MainTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCheckBox* Chk_MainSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_CheckDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SwitchFlag;
    
public:
    UMM_GameOption_Switch();

    UFUNCTION(BlueprintCallable)
    void OnClickSwitch(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDisable();
    
};

