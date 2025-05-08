#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_SquareStageList_Slot.generated.h"

class UButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_SquareStageList_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtRoomNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pBtn_Info;
    
public:
    UMM_Popup_SquareStageList_Slot();

    UFUNCTION(BlueprintCallable)
    void OnClickInfo();
    
};

