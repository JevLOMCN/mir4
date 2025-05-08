#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_RevivalTag_Btn.generated.h"

class UCanvasPanel;
class UMirButton;
class UMirImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_RevivalTag_Btn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_RevivalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_RevivalBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCanvasPanel_PartyMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pAnimAlarm;
    
public:
    UMM_RevivalTag_Btn();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickButton();
    
};

