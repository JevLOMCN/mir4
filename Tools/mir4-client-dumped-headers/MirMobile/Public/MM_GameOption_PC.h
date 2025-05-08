#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_PC.generated.h"

class UMM_CommonVerticalTabSet;
class UMM_GameOption_KeySetting;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_GameOption_PC : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* PC_TabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_KeySetting* game_option_key_setting;
    
public:
    UMM_GameOption_PC();

    UFUNCTION(BlueprintCallable)
    void OnClickTab(int32 tabIndex, bool bLocked);
    
};

