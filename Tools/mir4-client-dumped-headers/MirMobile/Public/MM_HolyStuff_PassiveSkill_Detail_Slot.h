#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HolyStuff_PassiveSkill_Detail_Slot.generated.h"

class UMirRichTextBlock;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HolyStuff_PassiveSkill_Detail_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Rtxt_Desc;
    
public:
    UMM_HolyStuff_PassiveSkill_Detail_Slot();

};

