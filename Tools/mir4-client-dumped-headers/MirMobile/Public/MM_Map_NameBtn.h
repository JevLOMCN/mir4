#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_NameBtn.generated.h"

class UMirButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_NameBtn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_BtnMain;
    
public:
    UMM_Map_NameBtn();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

