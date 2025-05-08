#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ServerVisit_PlunderStage_List.generated.h"

class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_ServerVisit_PlunderStage_List : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* scrStageList;
    
public:
    UMM_ServerVisit_PlunderStage_List();

};

