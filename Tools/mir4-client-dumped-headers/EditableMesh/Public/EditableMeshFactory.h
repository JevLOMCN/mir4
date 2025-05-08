#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EditableMeshFactory.generated.h"

class UEditableMesh;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class EDITABLEMESH_API UEditableMeshFactory : public UObject {
    GENERATED_BODY()
public:
    UEditableMeshFactory();

    UFUNCTION(BlueprintCallable)
    static UEditableMesh* MakeEditableMesh(UPrimitiveComponent* PrimitiveComponent, const int32 LODIndex);
    
};

