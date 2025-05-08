#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Chat_Setting.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Chat_Setting : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_BlockUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_BlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_RenderOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* Toggle_HideSystemChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* Toggle_HideGuildSystemMessage;
    
public:
    UMM_Popup_Chat_Setting();

    UFUNCTION(BlueprintCallable)
    void OnToggleHideSystemChannel(bool CheckState);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleHideGuildSystemMessage(bool CheckState);
    
    UFUNCTION(BlueprintCallable)
    void OnClickRenderOpacity();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBlockUser();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBlockList();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAddBlockUser(const FString& BlockUserName);
    
};

