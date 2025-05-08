#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EOccupationCommandSlotType.h"
#include "WidgetBase.h"
#include "MM_Occupation_CommandSlot.generated.h"

class UMM_Common_Btn;
class UMM_UI_Drag;
class UMirImage;
class UMirTextBlock;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Occupation_CommandSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOccupationCommandSlotType CommandSlotType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UI_Drag* m_UIDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Mark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_DisableSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Edit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Apply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Cancel;
    
public:
    UMM_Occupation_CommandSlot();

    UFUNCTION(BlueprintCallable)
    void OnStartControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnDragControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnClickButtonMarkIcon();
    
    UFUNCTION(BlueprintCallable)
    void OnClickButtonEdit();
    
    UFUNCTION(BlueprintCallable)
    void OnClickButtonCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickButtonApply();
    
};

