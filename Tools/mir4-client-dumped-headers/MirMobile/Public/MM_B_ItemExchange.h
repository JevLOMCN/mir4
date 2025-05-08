#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_ItemExchange.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Item_Make_Slot_Registered;
class UMirImage;
class UMirRichTextBlock;
class UMirScrollBox;
class UMirTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_ItemExchange : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* mHorizonTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* mVerticalTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* mNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* mScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* mWrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgExchangeGradeBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* mTxtExchangName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgTargetEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgTargetGradeBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgTargetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgTargetNameBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* mTxtTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgTargetTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* mBtnExchange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Item_Make_Slot_Registered* Slot_MakeItem;
    
public:
    UMM_B_ItemExchange();

    UFUNCTION(BlueprintCallable)
    void OnClickVerticalTab(int32 iTabIndex, bool bLocked);
    
    UFUNCTION()
    void OnClickInvenSlot(int64 _UID, int32 _TID, int32 _EquipPos);
    
    UFUNCTION(BlueprintCallable)
    void OnClickHorizonTab(int32 iTabIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickExchange();
    
};

