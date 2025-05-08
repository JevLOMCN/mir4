#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_KeyPad.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_KeyPad : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Minus10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Minus1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Plus10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Plus1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Reset;
    
public:
    UMM_Customizing_KeyPad();

    UFUNCTION(BlueprintCallable)
    void OnClickReset();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPlus10();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPlus1();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMinus10();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMinus1();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

