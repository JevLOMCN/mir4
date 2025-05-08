#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_VersionSelect.generated.h"

class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_VersionSelect : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_Wrap_SlotList;
    
public:
    UMM_Popup_VersionSelect();

};

