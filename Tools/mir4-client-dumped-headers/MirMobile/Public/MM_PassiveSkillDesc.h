#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PassiveSkillDesc.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_PassiveSkillDesc : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Rtxt_Desc;
    
    UMM_PassiveSkillDesc();

};

