#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "UniformScalar.generated.h"

class UUniformScalar;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UUniformScalar : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UUniformScalar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUniformScalar* SetUniformScalar(float NewMagnitude);
    
};

