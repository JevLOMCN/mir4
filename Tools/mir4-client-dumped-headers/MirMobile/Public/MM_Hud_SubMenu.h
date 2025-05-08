#pragma once
#include "CoreMinimal.h"
#include "ESubMenuType.h"
#include "WidgetBase.h"
#include "MM_Hud_SubMenu.generated.h"

class UMM_Hud_SubMenuSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_SubMenu : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESubMenuType, int32> m_mapSubMenuSlotTypeInfo;
    
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Hud_SubMenuSlot* m_arrSubMenuSlotList[2];
    
public:
    UMM_Hud_SubMenu();

};

