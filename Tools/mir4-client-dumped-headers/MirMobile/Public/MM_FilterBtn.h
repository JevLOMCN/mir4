#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_FilterBtn.generated.h"

class UMirButton;
class UMirCheckBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_FilterBtn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_Check_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
public:
    UMM_FilterBtn();

    UFUNCTION(BlueprintCallable)
    void OnClick_Main();
    
};

