#include "SlateAccessibleWidgetData.h"

USlateAccessibleWidgetData::USlateAccessibleWidgetData() {
    this->bCanChildrenBeAccessible = true;
    this->AccessibleBehavior = ESlateAccessibleBehavior::NotAccessible;
    this->AccessibleSummaryBehavior = ESlateAccessibleBehavior::Auto;
}


