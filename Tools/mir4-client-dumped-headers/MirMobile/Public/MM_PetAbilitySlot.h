#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PetAbilitySlot.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PetAbilitySlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Rtxt_Desc;
    
public:
    UMM_PetAbilitySlot();

};

