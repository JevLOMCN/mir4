#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGNotificationInboxStyle.generated.h"

class UAGNotificationInboxStyle;

UCLASS(Blueprintable)
class UAGNotificationInboxStyle : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationInboxStyle();

    UFUNCTION(BlueprintCallable)
    UAGNotificationInboxStyle* SetSummaryText(const FString& summary);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationInboxStyle* SetBigContentTitle(const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationInboxStyle* CreateInboxStyle();
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationInboxStyle* AddLine(const FString& line);
    
};

