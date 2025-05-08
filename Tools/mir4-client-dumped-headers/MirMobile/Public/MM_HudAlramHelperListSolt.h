#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudAlramHelperListSolt.generated.h"

class UButton;
class UImage;
class UMM_Common_Btn_Symbol;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudAlramHelperListSolt : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Link;
    
public:
    UMM_HudAlramHelperListSolt();

    UFUNCTION(BlueprintCallable)
    void OnClickLink();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

