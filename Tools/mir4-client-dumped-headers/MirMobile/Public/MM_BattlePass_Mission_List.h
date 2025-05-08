#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_BattlePass_Mission_List.generated.h"

class UMM_BattlePass_Week_Btn;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_BattlePass_Mission_List : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_BattlePass_Week_Btn* m_Week_Btn[3];
    
public:
    UMM_BattlePass_Mission_List();

};

