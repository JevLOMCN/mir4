#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_UIShopStepGoodsList.generated.h"

class UMM_Common_Btn_Symbol;
class UMirListView;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_UIShopStepGoodsList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_BtnClose;
    
public:
    UMM_Popup_UIShopStepGoodsList();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

