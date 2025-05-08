#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGMaps.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGMaps : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGMaps();

    UFUNCTION(BlueprintCallable)
    static bool UserHasMapsApp();
    
    UFUNCTION(BlueprintCallable)
    static void OpenMapLocationWithLabel(float latitude, float longitude, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static void OpenMapLocationWithAddress(const FString& address);
    
    UFUNCTION(BlueprintCallable)
    static void OpenMapLocation(float latitude, float longitude, int32 zoom);
    
};

