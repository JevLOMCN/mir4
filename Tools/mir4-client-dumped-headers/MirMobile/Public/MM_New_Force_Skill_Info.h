#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_New_Force_Skill_Info.generated.h"

class UMirRichTextBlock;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_New_Force_Skill_Info : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_C_Txt_TotalBloodLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_C_TxtCombatPoint;
    
public:
    UMM_New_Force_Skill_Info();

};

