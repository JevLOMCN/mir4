#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Achievement_Option_Slot.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Achievement_Option_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_OptionValue;
    
public:
    UMM_Achievement_Option_Slot();

};

