#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_NameTag.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_NameTag : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxtName;
    
public:
    UMM_Map_NameTag();

};

