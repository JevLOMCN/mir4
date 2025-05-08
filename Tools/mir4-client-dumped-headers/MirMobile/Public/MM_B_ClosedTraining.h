#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_ClosedTraining.generated.h"

class UMM_ClosedTraining_Info;
class UMM_ClosedTraining_Slot;
class UMM_Common_Btn_Inven;
class UMM_Common_Btn_Symbol;
class UMirProgressBar;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_ClosedTraining : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Common_Btn_Inven*> m_TabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_ClosedTraining_Slot*> m_SlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_TotalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Prog_TotalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_CollectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_CollectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Collect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_AbilityDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ClosedTraining_Info* m_SlotInfo;
    
public:
    UMM_B_ClosedTraining();

    UFUNCTION(BlueprintCallable)
    void OnClick_TotalAbility();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Tab(int32 tabIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Collect();
    
};

