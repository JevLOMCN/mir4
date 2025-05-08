#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SkillDesc.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SkillDesc : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Txt_SkillDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Txt_NextSkillDesc;
    
public:
    UMM_SkillDesc();

};

