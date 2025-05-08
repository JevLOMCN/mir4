#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_Btn_Translation.generated.h"

class UMirButton;
class UMirImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_Btn_Translation : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_BtnMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Translate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Inprogress;
    
public:
    UMM_Common_Btn_Translation();

    UFUNCTION(BlueprintCallable)
    void OnClick_Main();
    
};

