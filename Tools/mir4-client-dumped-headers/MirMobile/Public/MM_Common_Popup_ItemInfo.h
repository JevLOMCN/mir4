#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_Popup_ItemInfo.generated.h"

class UMM_PopUp_ItemInfo;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_Popup_ItemInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PopUp_ItemInfo* m_ItemInfo_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PopUp_ItemInfo* m_ItemInfo_Right;
    
public:
    UMM_Common_Popup_ItemInfo();

};

