#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ImpactStrength.h"
#include "NotificationType.h"
#include "IGHaptics.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGHaptics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGHaptics();

    UFUNCTION(BlueprintCallable)
    static void Vibrate();
    
    UFUNCTION(BlueprintCallable)
    static void SendSelectionHapticFeedback();
    
    UFUNCTION(BlueprintCallable)
    static void SendNotificationHapticFeedback(TEnumAsByte<NotificationType> Type);
    
    UFUNCTION(BlueprintCallable)
    static void SendImpactHapticFeedback(TEnumAsByte<ImpactStrength> Strength);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHapticFeedbackSupported();
    
};

