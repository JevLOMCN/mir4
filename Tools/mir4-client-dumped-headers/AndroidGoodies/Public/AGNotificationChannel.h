#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGAudioAttributes.h"
#include "ChannelImportance.h"
#include "NotificationVisibility.h"
#include "AGNotificationChannel.generated.h"

class UAGNotificationChannel;

UCLASS(Blueprintable)
class UAGNotificationChannel : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationChannel();

    UFUNCTION(BlueprintCallable)
    bool ShouldVibrate();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShowLights();
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetVibrationPattern(TArray<float> pattern);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetSound(const FString& FilePath, FAGAudioAttributes Attributes);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetShowBadge(bool Show);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetLockScreenVisibility(TEnumAsByte<NotificationVisibility> Visibility);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetLightColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetImportance(TEnumAsByte<ChannelImportance> importance);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetGroup(const FString& GroupId);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetEnableVibration(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetEnableLights(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetDescription(const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationChannel* SetBypassDnd(bool bypass);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationChannel* NewNotificationChannel(const FString& ID, const FString& Name, TEnumAsByte<ChannelImportance> importance);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetVibrationPattern();
    
    UFUNCTION(BlueprintCallable)
    FString GetSoundPath();
    
    UFUNCTION(BlueprintCallable)
    FString GetName();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<NotificationVisibility> GetLockScreenVisibility();
    
    UFUNCTION(BlueprintCallable)
    FColor GetLightColor();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ChannelImportance> GetImportance();
    
    UFUNCTION(BlueprintCallable)
    FString GetId();
    
    UFUNCTION(BlueprintCallable)
    FString GetGroupId();
    
    UFUNCTION(BlueprintCallable)
    FString GetDescription();
    
    UFUNCTION(BlueprintCallable)
    FAGAudioAttributes GetAudioAttributes();
    
    UFUNCTION(BlueprintCallable)
    bool CanShowBadge();
    
    UFUNCTION(BlueprintCallable)
    bool CanBypassDnd();
    
};

