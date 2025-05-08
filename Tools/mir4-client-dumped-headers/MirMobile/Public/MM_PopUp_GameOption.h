#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_GameOption.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_Common_Btn_Symbol;
class UMM_GameOption_Account;
class UMM_GameOption_Environment;
class UMM_GameOption_InGame;
class UMM_GameOption_PC;
class UMirButton;
class UPanelWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_GameOption : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Goods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* MainTabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Account* GameOption_Account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame* GameOption_InGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Environment* GameOption_Environment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_PC* GameOption_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Return;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
public:
    UMM_PopUp_GameOption();

    UFUNCTION(BlueprintCallable)
    void OnLinkIDPComplete(bool Success, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnClickReturn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainTab(int32 tabIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

