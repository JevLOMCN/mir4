#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_SkillAwakenList.generated.h"

class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_SkillAwakenList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* mCBClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* mBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* mScrollBox;
    
public:
    UMM_Popup_SkillAwakenList();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

