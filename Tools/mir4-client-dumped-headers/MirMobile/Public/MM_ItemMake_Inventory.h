#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemMake_Inventory.generated.h"

class UMM_ItemMake_Slot;
class UMirWrapScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemMake_Inventory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_ItemMake_Slot*> InvenSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWrapScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_MaxSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_CurrentSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SelectedMakeTID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MIN_SLOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MAX_LINE_SLOT;
    
public:
    UMM_ItemMake_Inventory();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot(int32 MakeItemID);
    
};

