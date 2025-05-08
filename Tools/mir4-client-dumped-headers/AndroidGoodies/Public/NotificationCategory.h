#pragma once
#include "CoreMinimal.h"
#include "NotificationCategory.generated.h"

UENUM(BlueprintType)
enum NotificationCategory {
    CategoryAlarm,
    CategoryCall,
    CategoryEmail,
    CategoryError,
    CategoryEvent,
    CategoryMessage,
    CategoryNavigation,
    CategoryProgress,
    CategoryPromo,
    CategoryRecommendation,
    CategoryReminder,
    CategoryService,
    CategorySocial,
    CategoryStatus,
    CategorySystem,
    CategoryTransport,
};

