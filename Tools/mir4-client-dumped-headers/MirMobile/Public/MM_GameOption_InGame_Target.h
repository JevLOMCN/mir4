#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_InGame_Target.generated.h"

class UMM_GameOption_Select;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_InGame_Target : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* Option_select_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_GameOption_Select*> arOption_Select;
    
public:
    UMM_GameOption_InGame_Target();

    UFUNCTION(BlueprintCallable)
    void OnSelectedTargetingType(int32 idx);
    
};

