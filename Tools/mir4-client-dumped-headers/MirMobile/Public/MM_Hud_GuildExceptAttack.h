#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_GuildExceptAttack.generated.h"

class UMM_Common_Btn_Symbol;
class UMirRichTextBlock;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Hud_GuildExceptAttack : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* rtxt_except_attack_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_guild_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_guild_list_except;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_refresh;
    
public:
    UMM_Hud_GuildExceptAttack();

    UFUNCTION(BlueprintCallable)
    void OnClickRefresh();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

