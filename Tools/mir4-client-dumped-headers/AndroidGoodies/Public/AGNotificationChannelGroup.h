#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGNotificationChannelGroup.generated.h"

class UAGNotificationChannel;
class UAGNotificationChannelGroup;

UCLASS(Blueprintable)
class UAGNotificationChannelGroup : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationChannelGroup();

    UFUNCTION(BlueprintCallable)
    UAGNotificationChannelGroup* SetDescription(const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationChannelGroup* NewNotificationChannelGroup(const FString& ID, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlocked();
    
    UFUNCTION(BlueprintCallable)
    FString GetName();
    
    UFUNCTION(BlueprintCallable)
    FString GetId();
    
    UFUNCTION(BlueprintCallable)
    FString GetDescription();
    
    UFUNCTION(BlueprintCallable)
    TArray<UAGNotificationChannel*> GetChannels();
    
};

