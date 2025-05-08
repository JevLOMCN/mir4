#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_DominionPrizeSlot.generated.h"

class UMM_Common_Btn_Cost;
class UMirButton;
class UMirImage;
class UMirTextBlock;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_DominionPrizeSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pBtnOk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtDoPrize;
    
public:
    UMM_Popup_DominionPrizeSlot();

    UFUNCTION(BlueprintCallable)
    void OnClickOkPrize();
    
    UFUNCTION(BlueprintCallable)
    void OnClickInfo();
    
    UFUNCTION(BlueprintCallable)
    void Bind_ClickDelegate(int32 iIndex, UObject* pObj, const FName& FunctionName);
    
};

