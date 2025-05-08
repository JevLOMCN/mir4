#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "WidgetBase.h"
#include "MM_UIShopGoodsScrollBox.generated.h"

class UMM_UIShopGoodsSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopGoodsScrollBox : public UWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopGoodsSlot* mGoodSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopGoodsSlot* mGoodSlot2;
    
public:
    UMM_UIShopGoodsScrollBox();


    // Fix for true pure virtual functions not being implemented
};

