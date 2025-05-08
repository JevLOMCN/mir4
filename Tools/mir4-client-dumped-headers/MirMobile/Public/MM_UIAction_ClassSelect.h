#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_ClassSelect.generated.h"

class AMM_CharacterCustomizingActor;

UCLASS(Blueprintable)
class UMM_UIAction_ClassSelect : public UMM_UIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AMM_CharacterCustomizingActor*> m_mapCustomizingActor;
    
    UMM_UIAction_ClassSelect();

    UFUNCTION(BlueprintCallable)
    void OnClickClassSelect(int32 ClassID);
    
};

