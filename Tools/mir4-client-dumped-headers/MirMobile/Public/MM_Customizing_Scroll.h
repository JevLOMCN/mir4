#pragma once
#include "CoreMinimal.h"
#include "CustomizingComponentBase.h"
#include "MM_Customizing_Scroll.generated.h"

class UMM_Customizing_ListItem;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Scroll : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_ListItem*> m_ListSlotArray;
    
    UMM_Customizing_Scroll();

    UFUNCTION(BlueprintCallable)
    void OnClickScrollSlot(int32 nIndex);
    
};

