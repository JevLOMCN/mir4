#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ObjectNameTagWidget.generated.h"

class AMM_ObjectBase;

UCLASS(Blueprintable, EditInlineNew)
class UObjectNameTagWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_ObjectBase* m_pObjectBase;
    
public:
    UObjectNameTagWidget();

};

