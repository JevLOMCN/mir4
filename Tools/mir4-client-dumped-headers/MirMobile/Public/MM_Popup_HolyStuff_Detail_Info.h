#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_HolyStuff_Detail_Info.generated.h"

class UMM_Common_Btn_Symbol;
class UMirCanvasPanel;
class UMirCheckBox;
class UMirScrollBox;
class UMirTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_HolyStuff_Detail_Info : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_Passive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_StatTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_PassiveTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_VericlaBox_Stat_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_VericlaBox_Stat_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_Passive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox_Passive;
    
public:
    UMM_Popup_HolyStuff_Detail_Info();

    UFUNCTION(BlueprintCallable)
    void OnClick_Close();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_CheckBoxStat(bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_CheckBoxPassive(bool bSelected);
    
};

