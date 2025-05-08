#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_NFT_Relocation.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_Common_Btn_Cost;
class UMirRichTextBlock;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_B_NFT_Relocation : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ConditionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scroll_ConditionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_Btn_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_ConditionNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_MenuTabSet;
    
public:
    UMM_B_NFT_Relocation();

    UFUNCTION(BlueprintCallable)
    void OnClickStart();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMenuTab(int32 iIndex, bool bLocked);
    
};

