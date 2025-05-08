#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_GuildExceptAttackSlot.generated.h"

class UMM_Common_Btn_Symbol;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Hud_GuildExceptAttackSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_guild_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_del;
    
public:
    UMM_Hud_GuildExceptAttackSlot();

    UFUNCTION(BlueprintCallable)
    void OnClickRemove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAdd();
    
};

