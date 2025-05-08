#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_NewInventoryUnsealing.generated.h"

class UHorizontalBox;
class UMM_NewInventory;
class UMM_NewInventoryTab;
class UMirCheckBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventoryUnsealing : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_InvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_pNoticeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_pCheckOnOff;
    
public:
    UMM_NewInventoryUnsealing();

protected:
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBox(bool bChecked);
    
};

