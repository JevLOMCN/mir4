#pragma once
#include "CoreMinimal.h"
#include "KillLogCampType.h"
#include "WidgetBase.h"
#include "MM_Occupation_Observer_KillLog.generated.h"

class UMM_Occupation_Observer_KillLog_Slot;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Occupation_Observer_KillLog : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_PanelMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Occupation_Observer_KillLog_Slot*> KillLogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_InitAsyncLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_AddMessageLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    KillLogCampType CampType;
    
public:
    UMM_Occupation_Observer_KillLog();

};

