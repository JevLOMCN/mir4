#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Item_Make_Slider_BigInteger.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Item_Make_Slider_BigInteger : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxt_CurValueNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtn_DecreaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtn_IncreaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtn_MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtn_MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtn_IncreaseUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtn_KeyPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgCostIcon;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iMinValue;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iMaxValue;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iCurValue;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iStackValue;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iIncreaseUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_Lock;
    
public:
    UMM_Item_Make_Slider_BigInteger();

    UFUNCTION()
    void SetCurValueReturn(int64 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedMinValueBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedMaxValueBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedKeyPad();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedIncreaseUnit();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedIncrease();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedDecrease();
    
};

