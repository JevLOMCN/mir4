#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_ServerVisitSelect_Slot.generated.h"

class UMM_Common_Btn;
class UMirImage;
class UMirRichTextBlock;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_ServerVisitSelect_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxtTitleDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_BtnSelect;
    
public:
    UMM_Popup_ServerVisitSelect_Slot();

    UFUNCTION(BlueprintCallable)
    void OnClickSelect();
    
};

