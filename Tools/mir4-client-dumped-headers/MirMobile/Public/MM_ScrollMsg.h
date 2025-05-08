#pragma once
#include "CoreMinimal.h"
#include "EUIActionMessageWidgetType.h"
#include "MM_MessageWidgetBase.h"
#include "MsgDisplayInfo.h"
#include "MM_ScrollMsg.generated.h"

class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ScrollMsg : public UMM_MessageWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIActionMessageWidgetType m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSetMessageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSlotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSlotHeightScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_DisplayArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMsgDisplayInfo> m_arSlot;
    
public:
    UMM_ScrollMsg();

};

