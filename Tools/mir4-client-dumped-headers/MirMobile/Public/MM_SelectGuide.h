#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SelectGuide.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SelectGuide : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_MainMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_SubMsg;
    
public:
    UMM_SelectGuide();

    UFUNCTION(BlueprintCallable)
    void OnClickBtn();
    
};

