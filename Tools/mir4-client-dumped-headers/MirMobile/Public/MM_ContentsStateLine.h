#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ContentsStateLine.generated.h"

class UMirImage;
class UMirTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ContentsStateLine : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_arHrz_State[2];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_arImg_StateIcon[2];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_arTxt_StateName[2];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_arTxt_StateValue[2];
    
public:
    UMM_ContentsStateLine();

};

