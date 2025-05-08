#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Occupation_FlagSlot.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Occupation_FlagSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_ObjectTID;
    
public:
    UMM_Occupation_FlagSlot();

};

