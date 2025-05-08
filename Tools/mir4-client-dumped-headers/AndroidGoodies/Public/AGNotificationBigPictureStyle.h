#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGNotificationBigPictureStyle.generated.h"

class UAGNotificationBigPictureStyle;
class UTexture2D;

UCLASS(Blueprintable)
class UAGNotificationBigPictureStyle : public UObject {
    GENERATED_BODY()
public:
    UAGNotificationBigPictureStyle();

    UFUNCTION(BlueprintCallable)
    UAGNotificationBigPictureStyle* SetSummaryText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBigPictureStyle* SetBigLargeIcon(UTexture2D* icon);
    
    UFUNCTION(BlueprintCallable)
    UAGNotificationBigPictureStyle* SetBigContentTitle(const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static UAGNotificationBigPictureStyle* CreateBigPictureStyle(UTexture2D* bigPicture);
    
};

