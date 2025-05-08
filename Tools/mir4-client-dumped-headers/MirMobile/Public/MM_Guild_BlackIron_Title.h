#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Guild_BlackIron_Title.generated.h"

class UMM_Common_ToolTipBtn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Guild_BlackIron_Title : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* m_pInfo;
    
public:
    UMM_Guild_BlackIron_Title();

    UFUNCTION(BlueprintCallable)
    void OnClickToolTip();
    
};

