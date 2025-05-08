#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeInt.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldNodeInt : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeInt(const FObjectInitializer& ObjectInitializer);

};

