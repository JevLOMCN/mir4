#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Occupation_KillLog.generated.h"

class UMM_Occupation_KillLog_Slot;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Occupation_KillLog : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Occupation_KillLog_Slot*> KillLogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_InitAsyncLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_AddMessageLatency;
    
public:
    UMM_Occupation_KillLog();

};

