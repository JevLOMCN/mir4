#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Xdraco_SealingInventory.generated.h"

class UMM_ItemSealing_Slot;
class UMirWrapScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Xdraco_SealingInventory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MAX_SLOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MAX_LINE_SLOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWrapScrollBox* m_pScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_ItemSealing_Slot*> InvenSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_MaxSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_CurrentSlotCount;
    
public:
    UMM_Xdraco_SealingInventory();

    UFUNCTION(BlueprintCallable)
    void OnSelectTab_Interaction();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlot(int32 ItemTID);
    
};

