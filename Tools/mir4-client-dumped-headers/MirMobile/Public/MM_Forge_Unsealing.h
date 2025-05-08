#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Forge_Unsealing.generated.h"

class UMM_Common_Btn;
class UMM_Forge_UnsealingSlot;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Forge_Unsealing : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ALL_RECIEVE_BTN_EFECT_ID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_UnsealingStateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_UnsealingSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnGetAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Forge_UnsealingSlot*> m_arUnsealingSlot;
    
public:
    UMM_Forge_Unsealing();

    UFUNCTION(BlueprintCallable)
    void OnClickGetAll();
    
};

