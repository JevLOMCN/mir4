#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ESelectionMode -FallbackName=ESelectionMode
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EConsumeMouseWheel -FallbackName=EConsumeMouseWheel
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "ListViewBase.h"
#include "OnItemIsHoveredChangedDynamicDelegate.h"
#include "OnListEntryInitializedDynamicDelegate.h"
#include "OnListItemScrolledIntoViewDynamicDelegate.h"
#include "OnListItemSelectionChangedDynamicDelegate.h"
#include "SimpleListItemEventDynamicDelegate.h"
#include "ListView.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMG_API UListView : public UListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearSelectionOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnFocusToSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> listItems;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListEntryInitializedDynamic BP_OnEntryInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleListItemEventDynamic BP_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleListItemEventDynamic BP_OnItemDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemIsHoveredChangedDynamic BP_OnItemIsHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListItemSelectionChangedDynamic BP_OnItemSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListItemScrolledIntoViewDynamic BP_OnItemScrolledIntoView;
    
public:
    UListView();

    UFUNCTION(BlueprintCallable)
    void SetSelectionMode(TEnumAsByte<ESelectionMode::Type> NewSelectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ScrollIndexIntoView(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefreshPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetListItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetItemAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexForItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearListItems();
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_SetSelectedItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetListItems(const TArray<UObject*>& InListItems);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetItemSelection(UObject* Item, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void BP_ScrollItemIntoView(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_NavigateToItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsItemVisible(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool BP_GetSelectedItems(TArray<UObject*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* BP_GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetNumItemsSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void BP_CancelScrollIntoView();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* Item);
    
};

