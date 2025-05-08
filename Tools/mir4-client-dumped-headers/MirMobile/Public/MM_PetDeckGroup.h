#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PetDeckGroup.generated.h"

class UMM_PetSlot;
class UPanelWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PetDeckGroup : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hrz_Main;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PetSlot* m_arDeckSlot[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniAppear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniDisappear;
    
public:
    UMM_PetDeckGroup();

};

