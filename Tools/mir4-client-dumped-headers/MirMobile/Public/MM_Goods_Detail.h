#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Goods_Detail.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_Goods_Slot;
class UMirButton;
class UMirImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Goods_Detail : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_arMenuIconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUse_InfomationBtn;
    
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Goods_Slot* m_arGoodsDetailSlot[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_HideDetail;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_arCan_MenuBtn[8];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_arImg_MenuIcon[8];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_arBtn_Menu[8];
    
public:
    UMM_Goods_Detail();

    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_7();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_6();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_5();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_4();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_3();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_2();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_1();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_MenuBtn_0();
    
};

