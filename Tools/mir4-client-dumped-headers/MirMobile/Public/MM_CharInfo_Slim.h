#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharInfo_Slim.generated.h"

class UMM_Common_Btn_Symbol;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharInfo_Slim : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_C_TxtCombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_BtnDetail;
    
public:
    UMM_CharInfo_Slim();

    UFUNCTION(BlueprintCallable)
    void OnClickDetailButton();
    
};

