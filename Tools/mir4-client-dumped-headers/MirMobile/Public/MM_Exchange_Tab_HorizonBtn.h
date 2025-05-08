#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Exchange_Tab_HorizonBtn.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;
class UTutorialHighlightWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Exchange_Tab_HorizonBtn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTutorialHighlightWidget* m_TutorialHighLight;
    
public:
    UMM_Exchange_Tab_HorizonBtn();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

