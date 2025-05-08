#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CombatPoint.generated.h"

class UHorizontalBox;
class UMM_Common_Btn_Symbol;
class UMM_Common_ComparePoint;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CombatPoint : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_C_TxtCombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_BtnDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* horizontal_box_combatpower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mir_textblock_next_combatpower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ComparePoint* combat_power;
    
public:
    UMM_CombatPoint();

};

