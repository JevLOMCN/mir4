#pragma once
#include "CoreMinimal.h"
#include "CustomizingComponentBase.h"
#include "MM_Customizing_My_Costume.generated.h"

class UMM_Customizing_ListItem;
class UMirTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_My_Costume : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_ListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_ListItem*> m_ListSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Empty_Title;
    
    UMM_Customizing_My_Costume();

    UFUNCTION(BlueprintCallable)
    void OnClickCostumeItemEvent(int32 ListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_Customizing_ListItem*> CreateCostumeItem(int32 Count);
    
};

