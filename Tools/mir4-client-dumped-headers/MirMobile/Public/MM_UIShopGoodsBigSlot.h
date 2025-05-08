#pragma once
#include "CoreMinimal.h"
#include "MM_UIShopGoodsSlot.h"
#include "MM_UIShopGoodsBigSlot.generated.h"

class UMirCanvasPanel;
class UMirImage;
class UMirRichTextBlock;
class UMirScrollBox;
class UMirTextBlock;
class UScaleBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopGoodsBigSlot : public UMM_UIShopGoodsSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_GoodsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox_DetailSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_OnlyDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_OnlyDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScaleBox* m_ScaleBox_Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_PeriodDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_PeriodIndicator;
    
public:
    UMM_UIShopGoodsBigSlot();

};

