#pragma once
#include "CoreMinimal.h"
#include "DynamicEntryBoxBase.h"
#include "Templates/SubclassOf.h"
#include "DynamicEntryBox.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UMG_API UDynamicEntryBox : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
public:
    UDynamicEntryBox();

    UFUNCTION(BlueprintCallable)
    void Reset(bool bDeleteWidgets);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEntry(UUserWidget* EntryWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    UUserWidget* BP_CreateEntryOfClass(TSubclassOf<UUserWidget> EntryClass);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* BP_CreateEntry();
    
};

