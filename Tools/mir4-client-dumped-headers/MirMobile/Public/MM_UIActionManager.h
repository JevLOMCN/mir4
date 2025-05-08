#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMirUIActionType.h"
#include "MM_UIActionManager.generated.h"

class UMM_UIAction;

UCLASS(Blueprintable)
class UMM_UIActionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMirUIActionType, UMM_UIAction*> m_ActionMap;
    
public:
    UMM_UIActionManager();

};

