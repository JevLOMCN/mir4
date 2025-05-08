#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Equipment.generated.h"

class UImage;
class UMM_MyCharinfo;
class UMM_NewInventory_Equipment;
class UMM_SaleItemBasket;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Equipment : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iInventoryID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MyCharinfo* m_MyCharinfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SaleItemBasket* m_SellItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory_Equipment* m_InvenEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_RenderTargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_TargetPos;
    
public:
    UMM_B_Equipment();

};

