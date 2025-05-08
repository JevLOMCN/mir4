#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_GuildPermission.generated.h"

class UComboBoxString;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirCanvasPanel;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_GuildPermission : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_MeetingJoin_Grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Can_MeetingJoin_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_ComboBox_MeetingJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingJoin_Grade2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingJoin_Grade3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingJoin_Grade4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingJoin_Grade5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingJoin_GradeAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_MeetingView_Grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Can_MeetingView_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_ComboBox_MeetingView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingView_Grade2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingView_Grade3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingView_Grade4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingView_Grade5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_MeetingView_GradeAll;
    
public:
    UMM_Popup_GuildPermission();

    UFUNCTION(BlueprintCallable)
    void OnClickConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClickComboBox_MeetingView();
    
    UFUNCTION(BlueprintCallable)
    void OnClickComboBox_MeetingJoin();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingView_GradeAll();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingView_Grade5();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingView_Grade4();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingView_Grade3();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingView_Grade2();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingJoin_GradeAll();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingJoin_Grade5();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingJoin_Grade4();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingJoin_Grade3();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MeetingJoin_Grade2();
    
};

