#pragma once
#include "CoreMinimal.h"
#include "EDEBUG.h"
#include "ELOGTYPE.h"
#include "WidgetBase.h"
#include "DebugLogPanel.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UDebugLogPanel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* FixedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollList;
    
    UDebugLogPanel();

    UFUNCTION(BlueprintCallable)
    void InsertLog(TEnumAsByte<EDEBUG::Type> eKEY, TEnumAsByte<ELOGTYPE::Type> eType, const FString& _title, const FString& _contents);
    
};

