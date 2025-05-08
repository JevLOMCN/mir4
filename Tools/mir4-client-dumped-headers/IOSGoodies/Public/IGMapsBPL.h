#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MapViewType.h"
#include "TransportType.h"
#include "IGMapsBPL.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGMapsBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGMapsBPL();

    UFUNCTION(BlueprintCallable)
    static void PerformSearchNearLocation(const FString& query, float latitude, float longitude, int32 zoom, TEnumAsByte<MapViewType> ViewType);
    
    UFUNCTION(BlueprintCallable)
    static void PerformSearch(const FString& query, TEnumAsByte<MapViewType> ViewType);
    
    UFUNCTION(BlueprintCallable)
    static void OpenMapLocation(float latitude, float longitude, const FString& Label, TEnumAsByte<MapViewType> ViewType);
    
    UFUNCTION(BlueprintCallable)
    static void OpenMapAddress(const FString& address, const FString& Label, TEnumAsByte<MapViewType> ViewType);
    
    UFUNCTION(BlueprintCallable)
    static void GetDirections(const FString& destinationAddress, const FString& sourceAddress, TEnumAsByte<TransportType> TransportType, TEnumAsByte<MapViewType> ViewType);
    
};

