#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UIShopGoodsListView.generated.h"

class UMM_UIShopCashBag;
class UMM_UIShopGoodsListNormal;
class UMM_UIShopShoppingBag;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopGoodsListView : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopCashBag* m_UIShopCashBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopShoppingBag* m_UIShopShoppingBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopGoodsListNormal* m_UIShopGoodsListNormal;
    
public:
    UMM_UIShopGoodsListView();

};

