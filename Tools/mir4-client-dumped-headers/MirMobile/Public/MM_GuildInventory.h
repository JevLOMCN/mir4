#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildInventory.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Common_Btn_Inven;
class UMM_Common_Btn_Symbol;
class UMM_GuildInventoryGoods;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildInventory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_GuildInventoryGoods*> lst_inventory_goods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_log;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* board_notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_symbol_history_prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_symbol_history_next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_history_curr_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_donation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_user_give;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_guild_give;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_exchange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Inven* btn_input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Inven* btn_output;
    
public:
    UMM_GuildInventory();

    UFUNCTION(BlueprintCallable)
    void OnClickUserGive();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOutHistory();
    
    UFUNCTION(BlueprintCallable)
    void OnClickInputHistory();
    
    UFUNCTION(BlueprintCallable)
    void OnClickHistoryPrev();
    
    UFUNCTION(BlueprintCallable)
    void OnClickHistoryNext();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGuildGive();
    
    UFUNCTION(BlueprintCallable)
    void OnClickExchange();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDonation();
    
};

