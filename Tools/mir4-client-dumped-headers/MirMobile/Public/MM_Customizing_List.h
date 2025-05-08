#pragma once
#include "CoreMinimal.h"
#include "CustomizingComponentBase.h"
#include "MM_Customizing_List.generated.h"

class UMM_Customizing_ComponentTitle;
class UMM_Customizing_ListItem;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_List : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_ListItem*> m_ListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_pListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_ComponentTitle* m_pComponentTitle;
    
    UMM_Customizing_List();

    UFUNCTION(BlueprintCallable)
    void UpdateListSelectData(int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSubCategoryEvent(int32 SubCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickListItemEvent(int32 ListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_Customizing_ListItem*> CreateListItem(int32 Count);
    
};

