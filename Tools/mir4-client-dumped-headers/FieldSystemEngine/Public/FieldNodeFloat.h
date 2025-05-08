#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeFloat.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldNodeFloat : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeFloat(const FObjectInitializer& ObjectInitializer);

};

