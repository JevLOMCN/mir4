#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemMake_Switch.generated.h"

class UMirButton;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemMake_Switch : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_BtnSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaterialSlotIndex;
    
public:
    UMM_ItemMake_Switch();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

