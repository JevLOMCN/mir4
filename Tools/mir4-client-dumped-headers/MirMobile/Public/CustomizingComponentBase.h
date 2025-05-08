#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "CustomizingComponentBase.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UCustomizingComponentBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UCustomizingComponentBase();

};

