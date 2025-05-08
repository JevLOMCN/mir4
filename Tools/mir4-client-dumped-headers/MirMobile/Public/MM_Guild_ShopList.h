#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Guild_ShopList.generated.h"

class UMM_Slot_Inventory;
class UMirTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Guild_ShopList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_WrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Inventory*> m_arSlot;
    
public:
    UMM_Guild_ShopList();

    UFUNCTION(BlueprintCallable)
    void OnClickInvenSlot(int32 iGuildShopID);
    
};

