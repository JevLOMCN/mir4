#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_DarkAltar_Target.generated.h"

class UEffectWidgetBase;
class UImage;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Common_ProgressBar;
class UMaterialInstanceDynamic;
class UMirButton;
class UMirRichTextBlock;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_DarkAltar_Target : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ProgressBar* Widget_WinTargetHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_Ok;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_HP_Gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mat_HP_Gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* Txt_BattleRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* Txt_BattleStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_TargetHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* Txt_BattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_TakeOverRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* Effect_Hit;
    
public:
    UMM_Popup_DarkAltar_Target();

    UFUNCTION(BlueprintCallable)
    void OnClickOk();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

