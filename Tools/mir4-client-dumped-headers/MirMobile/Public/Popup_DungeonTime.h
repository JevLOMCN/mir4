#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "Popup_DungeonTime.generated.h"

class UMM_Common_Btn_Symbol;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPopup_DungeonTime : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* TxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirTextBlock*> arTxtTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtExplain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btnClose;
    
public:
    UPopup_DungeonTime();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

