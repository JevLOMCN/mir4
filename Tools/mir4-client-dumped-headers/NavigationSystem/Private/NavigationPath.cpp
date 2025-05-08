#include "NavigationPath.h"

UNavigationPath::UNavigationPath() {
    this->RecalculateOnInvalidation = ENavigationOptionFlag::Default;
}

bool UNavigationPath::isValid() const {
    return false;
}

bool UNavigationPath::IsStringPulled() const {
    return false;
}

bool UNavigationPath::IsPartial() const {
    return false;
}

float UNavigationPath::GetPathLength() const {
    return 0.0f;
}

float UNavigationPath::GetPathCost() const {
    return 0.0f;
}

FString UNavigationPath::GetDebugString() const {
    return TEXT("");
}

void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation) {
}

void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor) {
}


