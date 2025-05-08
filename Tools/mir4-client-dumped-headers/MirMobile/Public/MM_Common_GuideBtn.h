#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_GuideBtn.generated.h"

class UMirButton;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_GuideBtn : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuideId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAutoContentsType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Icon;
    
public:
    UMM_Common_GuideBtn();

    UFUNCTION(BlueprintCallable)
    void OnGetGuideURL(const FString& strGuideURL);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Main();
    
};

