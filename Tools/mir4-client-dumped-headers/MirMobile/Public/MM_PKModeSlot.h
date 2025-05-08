#pragma once
#include "CoreMinimal.h"
#include "EPKModeType.h"
#include "PKModeSlotDelegateDelegate.h"
#include "WidgetBase.h"
#include "MM_PKModeSlot.generated.h"

class UButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PKModeSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPKModeSlotDelegate OnSelectedModeEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Image_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_TextBlock_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Image_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPKModeType m_ModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSelected;
    
public:
    UMM_PKModeSlot();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelected();
    
};

