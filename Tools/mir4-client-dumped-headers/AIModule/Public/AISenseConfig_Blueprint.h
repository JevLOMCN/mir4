#pragma once
#include "CoreMinimal.h"
#include "AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Blueprint.generated.h"

class UAISense_Blueprint;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown, Config=Engine)
class AIMODULE_API UAISenseConfig_Blueprint : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Blueprint> Implementation;
    
    UAISenseConfig_Blueprint();

};

