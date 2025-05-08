#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FieldSystemMetaData.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaData : public UActorComponent {
    GENERATED_BODY()
public:
    UFieldSystemMetaData(const FObjectInitializer& ObjectInitializer);

};

