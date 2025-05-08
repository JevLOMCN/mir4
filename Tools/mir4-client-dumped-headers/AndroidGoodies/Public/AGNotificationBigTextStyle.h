#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGNotificationBigTextStyle.generated.h"

class UAGNotificationBigTextStyle;

UCLASS(Blueprintable)
class UAGNotificationBigTextStyle : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationBigTextStyle();

    UFUNCTION(BlueprintCallable)
    UAGNotificationBigTextStyle* SetSummaryText(const FString& summary);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBigTextStyle* SetBigContentTitle(const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationBigTextStyle* CreateBigTextStyle(const FString& bigText);
    
};

