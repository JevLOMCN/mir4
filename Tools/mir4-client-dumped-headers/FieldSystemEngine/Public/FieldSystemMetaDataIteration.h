#pragma once
#include "CoreMinimal.h"
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataIteration.generated.h"

class UFieldSystemMetaDataIteration;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataIteration : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Iterations;
    
    UFieldSystemMetaDataIteration(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 NewIterations);
    
};

