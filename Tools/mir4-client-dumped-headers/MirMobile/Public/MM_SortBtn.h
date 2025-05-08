#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SortBtn.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SortBtn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_Spc_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
public:
    UMM_SortBtn();

    UFUNCTION(BlueprintCallable)
    void OnClick_Main();
    
};

