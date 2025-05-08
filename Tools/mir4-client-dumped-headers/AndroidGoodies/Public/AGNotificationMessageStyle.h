#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGNotificationMessageStyle.generated.h"

class UAGNotificationMessageStyle;

UCLASS(Blueprintable)
class UAGNotificationMessageStyle : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationMessageStyle();

    UFUNCTION(BlueprintCallable)
    UAGNotificationMessageStyle* SetGroupConversation(bool isGroupConversation);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationMessageStyle* SetConversationTitle(const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationMessageStyle* CreateMessageStyle(const FString& userDisplayName);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationMessageStyle* AddMessage(const FString& Text, FDateTime Timestamp, const FString& sender);
    
};

