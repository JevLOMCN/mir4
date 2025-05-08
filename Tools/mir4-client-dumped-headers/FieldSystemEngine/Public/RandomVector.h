#pragma once
#include "CoreMinimal.h"
#include "FieldNodeVector.h"
#include "RandomVector.generated.h"

class URandomVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URandomVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    URandomVector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    URandomVector* SetRandomVector(float NewMagnitude);
    
};

