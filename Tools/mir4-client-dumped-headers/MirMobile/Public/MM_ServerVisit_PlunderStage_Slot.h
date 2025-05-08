#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ServerVisit_PlunderStage_Slot.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ServerVisit_PlunderStage_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* switchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* imgThumb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btnMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* imgSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* ImgFlag;
    
public:
    UMM_ServerVisit_PlunderStage_Slot();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickSlot();
    
};

