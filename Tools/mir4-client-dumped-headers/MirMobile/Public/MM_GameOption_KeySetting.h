#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_KeySetting.generated.h"

class UMM_Common_Btn;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_GameOption_KeySetting : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_reset;
    
public:
    UMM_GameOption_KeySetting();

    UFUNCTION(BlueprintCallable)
    void OnClickReset();
    
};

