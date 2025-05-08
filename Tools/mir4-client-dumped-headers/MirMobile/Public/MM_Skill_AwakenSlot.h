#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Skill_AwakenSlot.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Skill_AwakenSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* mRTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirRichTextBlock*> mRTxtAwakenDescList;
    
public:
    UMM_Skill_AwakenSlot();

};

