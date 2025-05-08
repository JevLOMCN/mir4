#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UIShopBtnCashBag.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopBtnCashBag : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtTabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* mBtnCashBag;
    
public:
    UMM_UIShopBtnCashBag();

    UFUNCTION(BlueprintCallable)
    void OnClickCashBag();
    
};

