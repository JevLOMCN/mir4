#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_CheckBtn.generated.h"

class UCheckBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_CheckBtn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCheckBox* m_CheckMain;
    
public:
    UMM_Map_CheckBtn();

    UFUNCTION(BlueprintCallable)
    void OnClickMain(bool bCheck);
    
};

