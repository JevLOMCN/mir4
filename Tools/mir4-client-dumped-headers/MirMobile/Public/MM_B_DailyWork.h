#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_DailyWork.generated.h"

class UMM_DailyWork_List;
class UMM_DailyWork_Progress;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_DailyWork : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DailyWork_List* DailyWorkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DailyWork_Progress* DailyWorkProgress;
    
public:
    UMM_B_DailyWork();

};

