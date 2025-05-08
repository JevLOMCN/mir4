#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Shop_NPC_Making.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_ShopNpcGoods;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Shop_NPC_Making : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ShopNpcGoods* m_ShopNPCGoods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_BtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_BtnMake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtNoItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_Money1ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_Money2ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_Money3ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsPossibleMake;
    
public:
    UMM_B_Shop_NPC_Making();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickMakeItem();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

