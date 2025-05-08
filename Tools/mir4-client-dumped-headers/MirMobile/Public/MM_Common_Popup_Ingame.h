#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_Popup_Ingame.generated.h"

class UImage;
class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMirRichTextBlock;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_Popup_Ingame : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_First;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CB_Cost;
    
public:
    UMM_Common_Popup_Ingame();

    UFUNCTION(BlueprintCallable)
    void Refuse_PartyCall();
    
    UFUNCTION(BlueprintCallable)
    void Refuse_GuildInvite();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSecond();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFirst();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCost();
    
    UFUNCTION(BlueprintCallable)
    void Accept_PartyCall();
    
    UFUNCTION(BlueprintCallable)
    void Accept_GuildInvite();
    
};

