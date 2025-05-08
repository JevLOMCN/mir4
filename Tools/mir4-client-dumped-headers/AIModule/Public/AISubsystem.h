#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AISubsystem.generated.h"

class UAISystem;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class AIMODULE_API UAISubsystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISystem* AISystem;
    
public:
    UAISubsystem();

};

