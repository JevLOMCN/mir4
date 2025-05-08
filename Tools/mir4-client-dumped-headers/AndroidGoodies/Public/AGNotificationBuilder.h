#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGNotificationDefaults.h"
#include "NotificationBadgeIconType.h"
#include "NotificationCategory.h"
#include "NotificationGroupAlert.h"
#include "NotificationPriority.h"
#include "NotificationVisibility.h"
#include "AGNotificationBuilder.generated.h"

class UAGNotification;
class UAGNotificationBigPictureStyle;
class UAGNotificationBigTextStyle;
class UAGNotificationBuilder;
class UAGNotificationInboxStyle;
class UAGNotificationMessageStyle;
class UTexture2D;

UCLASS(Blueprintable)
class UAGNotificationBuilder : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationBuilder();

    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetWhen(FDateTime DateTime);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetVisibility(TEnumAsByte<NotificationVisibility> Visibility);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetVibrate(TArray<float> pattern);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetUsesChronometer(bool usesChronometer);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetTitle(const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetTimeoutAfter(int32 milliSeconds);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetTicker(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetSubText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetSound(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetSortKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetSmallIcon(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetShowWhen(bool showWhen);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetShortcutId(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetPublicVersion(UAGNotification* Notification);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetProgress(int32 current, int32 Max, bool indeterminate);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetPriority(TEnumAsByte<NotificationPriority> Priority);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetOngoing(bool ongoing);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetNumber(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetMessagingStyle(UAGNotificationMessageStyle* Style);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetLocalOnly(bool localOnly);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetLights(FColor Color, int32 inMilliSeconds, int32 outMilliSeconds);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetLargeIcon(UTexture2D* icon);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetInboxStyle(UAGNotificationInboxStyle* Style);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetGroupSummary(bool summary);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetGroupAlertBehaviour(TEnumAsByte<NotificationGroupAlert> behaviour);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetGroup(const FString& groupKey);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetDefaults(FAGNotificationDefaults defaults);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetContentInfo(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetColorized(bool colorized);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetCategory(TEnumAsByte<NotificationCategory> Category);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetBigTextStyle(UAGNotificationBigTextStyle* Style);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetBigPictureStyle(UAGNotificationBigPictureStyle* Style);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetBadgeIconType(TEnumAsByte<NotificationBadgeIconType> badgeIconType);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetAutoCancel(bool autoCancel);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* SetAlertOnce(bool alertOnce);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationBuilder* NewNotificationBuilder(const FString& ChannelId, TMap<FString, FString> additionalData);
    
    UFUNCTION(BlueprintCallable)
    UAGNotification* Build();
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBuilder* AddOpenUrlAction(const FString& iconName, const FString& Title, const FString& URL);
    
};

