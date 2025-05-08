#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_QuestNormal_Auto.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Common_ToolTipBtn;
class UMirCheckBox;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_QuestNormal_Auto : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_All_Check_Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Initialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_List_Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Txt_List_Empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_PopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_RepeatMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ChangeOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_RepeatCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartBtnTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InitBtnTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PauseBtnTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StopBtnTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MissionPageBtnTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CompleteBtnTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RepeatCountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RepeatNumID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* m_pBtnCommToolTip;
    
public:
    UMM_QuestNormal_Auto();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickStart();
    
    UFUNCTION(BlueprintCallable)
    void OnClickInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAllCheckBox(bool bChecked);
    
};

