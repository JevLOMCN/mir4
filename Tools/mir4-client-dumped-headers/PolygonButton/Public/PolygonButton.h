#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "Polygon2D.h"
#include "PolygonButton.generated.h"

UCLASS(Blueprintable)
class POLYGONBUTTON_API UPolygonButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolygon2D NormalizedPolygon;
    
    UPolygonButton();

    UFUNCTION(BlueprintCallable)
    void SetPolygonVertices(const TArray<FVector2D>& VertexList);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> GetPolygonVertices();
    
};

