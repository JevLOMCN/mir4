#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_UIShopAds.generated.h"

class UFadeWidget;
class UMM_Common_Btn_Cost;
class UMM_UIShopAdsMovieWidget;
class UMM_UIShopAdsRewardBox;
class UMM_UIShopGoodsListNormal;
class UMirCanvasPanel;
class UMirCheckBox;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_UIShopAds : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_MainTabBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_MainTabScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_PanelSubTabLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_SubTabScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopGoodsListNormal* m_UIShopGoodsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_Ads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_AdsTooltipTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_AdsCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBoxSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_Btn_StartAds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopAdsRewardBox* m_AdsRewardBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIShopAdsMovieWidget* m_MoviePlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFadeWidget* m_FadeWidget;
    
    UMM_B_UIShopAds();

    UFUNCTION(BlueprintCallable)
    void OnMovieFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnClickStartAds();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMovieScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBoxSkip(bool Checked);
    
};

