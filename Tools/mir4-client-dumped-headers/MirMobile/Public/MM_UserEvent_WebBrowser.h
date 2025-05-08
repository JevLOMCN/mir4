#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UserEvent_WebBrowser.generated.h"

class UMirWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UserEvent_WebBrowser : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWebBrowser* m_Web_Main;
    
public:
    UMM_UserEvent_WebBrowser();

};

