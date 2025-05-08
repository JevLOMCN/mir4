#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UIShopGoodsListNormal.generated.h"

class UMM_Common_Board_Notice;
class UMirListView;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopGoodsListNormal : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* mListViewBigSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* mListViewNormalSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* mCommonNotice;
    
public:
    UMM_UIShopGoodsListNormal();

};

