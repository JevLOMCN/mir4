#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FieldSystemActor.generated.h"

class UFieldSystemComponent;

UCLASS(Blueprintable)
class FIELDSYSTEMENGINE_API AFieldSystemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFieldSystemComponent* FieldSystemComponent;
    
    AFieldSystemActor(const FObjectInitializer& ObjectInitializer);

};

