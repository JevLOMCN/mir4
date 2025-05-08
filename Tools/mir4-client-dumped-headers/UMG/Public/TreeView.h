#pragma once
#include "CoreMinimal.h"
#include "ListView.h"
#include "OnGetItemChildrenDynamicDelegate.h"
#include "OnItemExpansionChangedDynamicDelegate.h"
#include "TreeView.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMG_API UTreeView : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetItemChildrenDynamic BP_OnGetItemChildren;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemExpansionChangedDynamic BP_OnItemExpansionChanged;
    
public:
    UTreeView();

    UFUNCTION(BlueprintCallable)
    void SetItemExpansion(UObject* Item, bool bExpandItem);
    
    UFUNCTION(BlueprintCallable)
    void ExpandAll();
    
    UFUNCTION(BlueprintCallable)
    void CollapseAll();
    
};

