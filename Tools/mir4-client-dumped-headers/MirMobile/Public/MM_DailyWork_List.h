#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_DailyWork_List.generated.h"

class UMM_DailyWork_List_Slot;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_DailyWork_List : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_DailyWork_List_Slot*> WorkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* ScrollBox;
    
public:
    UMM_DailyWork_List();

};

