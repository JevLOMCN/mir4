#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_CenserResult.generated.h"

class UMM_Common_Btn;
class UMM_SynthesisResult_Slot;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_B_CenserResult : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SynthesisResult_Slot* m_CardSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_Btn_CenserOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pStartAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pEndAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pCardOpenAni;
    
public:
    UMM_B_CenserResult();

    UFUNCTION(BlueprintCallable)
    void OnClickOpenCenser();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCardOpen();
    
};

