#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "SlateBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMG_API USlateBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USlateBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D TransformVectorLocalToAbsolute(const FGeometry& Geometry, FVector2D LocalVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D TransformVectorAbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TransformScalarLocalToAbsolute(const FGeometry& Geometry, float LocalScalar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TransformScalarAbsoluteToLocal(const FGeometry& Geometry, float AbsoluteScalar);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ScreenToWidgetLocal(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void LocalToViewport(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetLocalTopLeft(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetLocalSize(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate);
    
};

