#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Dominion_Castle_Guild.generated.h"

class UHorizontalBox;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Common_ToolTipBtn;
class UMM_Dominion_Goods_Slot;
class UMM_GuildIcon;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dominion_Castle_Guild : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuildIcon* m_pIconGuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtGuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtGuildMasterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnGuildInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_pWidgetOccupyDur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtOccupyDur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* m_pCommToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Goods_Slot* m_pGoodsSlot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Goods_Slot* m_pGoodsSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Goods_Slot* m_pGoodsSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Goods_Slot* m_pGoodsSlot3;
    
public:
    UMM_Dominion_Castle_Guild();

    UFUNCTION(BlueprintCallable)
    void OnClickStorage();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGuildInfo();
    
};

