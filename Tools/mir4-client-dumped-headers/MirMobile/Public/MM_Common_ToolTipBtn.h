#pragma once
#include "CoreMinimal.h"
#include "EToolTipLocation.h"
#include "WidgetBase.h"
#include "MM_Common_ToolTipBtn.generated.h"

class UMirButton;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_ToolTipBtn : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStringToolTipTID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ImageVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverrideToolTipLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EToolTipLocation OverrideToolTipLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Icon;
    
public:
    UMM_Common_ToolTipBtn();

    UFUNCTION(BlueprintCallable)
    void OnUnhovered_Main();
    
    UFUNCTION(BlueprintCallable)
    void OnHovered_Main();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Main();
    
};

