#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_LanguageSlot.generated.h"

class UMM_Common_Btn;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_GameOption_LanguageSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Language;
    
public:
    UMM_GameOption_LanguageSlot();

    UFUNCTION(BlueprintCallable)
    void OnClickPopupOK();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

