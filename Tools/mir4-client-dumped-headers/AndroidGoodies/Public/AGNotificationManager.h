#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ChannelImportance.h"
#include "InterruptionFilter.h"
#include "AGNotificationManager.generated.h"

class UAGNotification;
class UAGNotificationChannel;
class UAGNotificationChannelGroup;

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGNotificationManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGNotificationManager();

    UFUNCTION(BlueprintCallable)
    static bool WasApplicationOpenViaNotification();
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentInterruptionFilter(TEnumAsByte<InterruptionFilter> Filter);
    
    UFUNCTION(BlueprintCallable)
    static void ScheduleRepeatingNotification(UAGNotification* Notification, int32 ID, FTimespan notifyAfter, FTimespan repeatAfter);
    
    UFUNCTION(BlueprintCallable)
    static void ScheduleNotification(UAGNotification* Notification, int32 ID, FTimespan notifyAfter);
    
    UFUNCTION(BlueprintCallable)
    static void OpenNotificationChannelSettings(const FString& ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static void Notify(UAGNotification* Notification, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static FString GetNotificationDataForKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAGNotificationChannel*> GetNotificationChannels();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAGNotificationChannelGroup*> GetNotificationChannelGroups();
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationChannelGroup* GetNotificationChannelGroup(const FString& GroupId);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationChannel* GetNotificationChannel(const FString& ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<InterruptionFilter> GetCurrentInterruptionFilter();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ChannelImportance> GetCurrentImportance();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteNotificationChannelGroup(const FString& GroupId);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteNotificationChannel(const FString& ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNotificationChannelGroup(UAGNotificationChannelGroup* Group);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNotificationChannel(UAGNotificationChannel* Channel);
    
    UFUNCTION(BlueprintCallable)
    static void CancelScheduledNotification(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void CancelNotification(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAllNotifications();
    
    UFUNCTION(BlueprintCallable)
    static bool AreNotificationChannelsSupported();
    
};

