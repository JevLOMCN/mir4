#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_UserEvent.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn_Symbol;
class UMM_USerEvent_BP_Attendance;
class UMM_UserEvent_Attendance_Day;
class UMM_UserEvent_Attendance_Day_02;
class UMM_UserEvent_Attendance_Month;
class UMM_UserEvent_BattlePass;
class UMM_UserEvent_Benediction;
class UMM_UserEvent_Gacha;
class UMM_UserEvent_Goal;
class UMM_UserEvent_Painting;
class UMM_UserEvent_Siege;
class UMM_UserEvent_WebBrowser;
class UMirCanvasPanel;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_UserEvent : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox_Tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Can_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Can_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Attendance_Month* m_UserEvent_Attendance_Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Attendance_Day* m_UserEvent_Attendance_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Attendance_Day_02* m_UserEvent_Attendance_Day_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_BattlePass* m_UserEvent_BattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Goal* m_UserEvent_Goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_WebBrowser* m_UserEvent_WebBrowser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Gacha* m_UserEvent_Gacha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Benediction* m_UserEvent_Benediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Siege* m_UserEvent_Siege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_USerEvent_BP_Attendance* m_UserEvent_BattlePass_Attendance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Painting* m_UserEvent_Painting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_C_Empty_Notice;
    
public:
    UMM_Popup_UserEvent();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

