#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_ClassPhase.generated.h"

class UMM_ClassPhase_ClassSlot;
class UMM_ClassPhase_InfoSlot;
class UMM_ClassPhase_SkillInfoSlot;
class UMM_Common_Btn_Cost;
class UMirButton;
class UMirImage;
class UMirScrollBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_ClassPhase : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_pWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ClassPhase_SkillInfoSlot* m_pClassPhaseSkillInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ClassPhase_InfoSlot* m_pClassPhaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetBase* m_pCurWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_pScrollClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnPhaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnPhaseSkillInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgSelectPhaseTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgSelectSkillTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pBtnOk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_ClassPhase_ClassSlot*> m_arrClassSlot;
    
public:
    UMM_B_ClassPhase();

    UFUNCTION(BlueprintCallable)
    void OnSkillTabClick();
    
    UFUNCTION(BlueprintCallable)
    void OnPhaseTabClick();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlot(int32 iSlotID, int32 iClassID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickOk();
    
};

