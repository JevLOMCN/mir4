#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_DarkAltar.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_DarkAltar : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_UpdateTime;
    
public:
    UMM_UIAction_DarkAltar();

};

