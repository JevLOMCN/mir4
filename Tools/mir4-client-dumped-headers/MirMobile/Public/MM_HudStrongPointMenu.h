#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudStrongPointMenu.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_StrongPoint_HudSlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudStrongPointMenu : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* Btn_Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_StrongPoint_HudSlot* HUD_BossMonsterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_StrongPoint_HudSlot* HUD_ControllerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_StrongPoint_HudSlot* HUD_HeartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_RemainTime;
    
public:
    UMM_HudStrongPointMenu();

    UFUNCTION(BlueprintCallable)
    void OnClickExit();
    
};

