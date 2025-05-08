#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "Hud_userfunction_Btn.generated.h"

class UImage;
class UMirButton;
class UMirImage;
class UMirTextBlock;
class UObject;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHud_userfunction_Btn : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_SymbolIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniClick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgSymbolIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_BtnDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgBgShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_BtnMain;
    
public:
    UHud_userfunction_Btn();

    UFUNCTION(BlueprintCallable)
    void OnReleasedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickButton();
    
};

