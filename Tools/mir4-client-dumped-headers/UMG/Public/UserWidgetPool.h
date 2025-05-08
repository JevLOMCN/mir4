#pragma once
#include "CoreMinimal.h"
#include "UserWidgetPool.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct UMG_API FUserWidgetPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ActiveWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> InactiveWidgets;
    
public:
    FUserWidgetPool();
};

