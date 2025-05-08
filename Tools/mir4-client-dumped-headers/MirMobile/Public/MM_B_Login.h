#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "WidgetBase.h"
#include "MM_B_Login.generated.h"

class UMM_VolumeController;
class UMirButton;
class UMirImage;
class UMirTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Login : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAbleTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProgressSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ServerCongestion_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ServerCongestion_Busy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ServerCongestion_Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ServerState_Closed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShowLoginInfoTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_TouchNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Peace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_ServerChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_LoadingPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_Logout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_LogoutIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Logout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Overlay_GameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_GameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_VolumeController* m_VolumeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_AccountPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_BlockScreen;
    
public:
    UMM_B_Login();

    UFUNCTION(BlueprintCallable)
    void ShowPopupAccountLinking();
    
    UFUNCTION(BlueprintCallable)
    void SetAble_ScreenBtn(bool bAble);
    
    UFUNCTION(BlueprintCallable)
    void OnClickServerChange();
    
    UFUNCTION(BlueprintCallable)
    void OnClickScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOption();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLogout();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGameStart();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAccountPopup();
    
    UFUNCTION(BlueprintCallable)
    void DisplayEnd_ShowLoginInfo();
    
    UFUNCTION(BlueprintCallable)
    void DisplayEnd_ShowLoading();
    
    UFUNCTION(BlueprintCallable)
    void DisplayEnd_OpenWidget();
    
    UFUNCTION(BlueprintCallable)
    void DisplayEnd_EndLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Display_ShowTouchNotice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Display_ShowLoginInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Display_ShowLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Display_OpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Display_EndLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Display_ClearAll();
    
};

