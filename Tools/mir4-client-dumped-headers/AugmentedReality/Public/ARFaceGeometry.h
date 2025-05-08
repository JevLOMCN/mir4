#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARTrackedGeometry.h"
#include "EAREye.h"
#include "EARFaceBlendShape.h"
#include "ARFaceGeometry.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARFaceGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTracked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EARFaceBlendShape, float> BlendShapes;
    
public:
    UARFaceGeometry();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWorldSpaceEyeTransform(EAREye Eye) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalSpaceEyeTransform(EAREye Eye) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendShapeValue(EARFaceBlendShape BlendShape) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EARFaceBlendShape, float> GetBlendShapes() const;
    
};

