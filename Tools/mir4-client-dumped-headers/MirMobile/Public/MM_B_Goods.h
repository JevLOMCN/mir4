#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Goods.generated.h"

class UCanvasPanel;
class UMM_Common_Btn_Symbol;
class UMM_Common_GuideBtn;
class UMM_Goods_CoinSlot;
class UMM_Goods_Detail;
class UMM_Goods_Slot;
class UMM_Goods_Tab;
class UMirButton;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Goods : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_CanScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Return;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Goods_Tab* m_arGoodsTab[3];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Goods_Slot* m_arGoodsSlot[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Goods_Detail* m_Goods_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_ToggleDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_Spc_ContentsSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_GuideBtn* m_pBtnGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Goods_CoinSlot* m_pHydraSlot;
    
public:
    UMM_B_Goods();

    UFUNCTION(BlueprintCallable)
    void OnClickToggleDetail();
    
    UFUNCTION(BlueprintCallable)
    void OnClickReturn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCostSubBtn(int32 iCostMain, int32 iCostSub);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

