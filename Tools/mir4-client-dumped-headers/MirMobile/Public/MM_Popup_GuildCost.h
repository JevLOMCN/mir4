#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_GuildCost.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_Goods_Slot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_GuildCost : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtGuildCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Goods_Slot*> mGoodSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* mBtnClose;
    
public:
    UMM_Popup_GuildCost();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

