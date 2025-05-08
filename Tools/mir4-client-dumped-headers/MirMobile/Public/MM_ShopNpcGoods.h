#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ShopNpcGoods.generated.h"

class UMM_ShopNpcGoodsSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ShopNpcGoods : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ShopNpcGoodsSlot* slot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ShopNpcGoodsSlot* slot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ShopNpcGoodsSlot* slot3;
    
public:
    UMM_ShopNpcGoods();

};

