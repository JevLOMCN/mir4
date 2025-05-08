#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_TotalQuickSlot_Attack.generated.h"

class UMM_GameOption_Select;
class UMM_GameOption_Switch;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_TotalQuickSlot_Attack : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* m_AutoBattle_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* m_AutoSkillSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* m_GameOptionSwitch1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* m_GameOptionSwitch2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* m_GameOptionSwitch3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* m_GameOptionSwitch4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* m_GameOptionSwitch5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_AutoBattle_Text;
    
public:
    UMM_TotalQuickSlot_Attack();

};

