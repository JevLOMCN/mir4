#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
#include "ComboBox.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMG_API UComboBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGenerateWidgetForObject OnGenerateWidgetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
    UComboBox();

};

