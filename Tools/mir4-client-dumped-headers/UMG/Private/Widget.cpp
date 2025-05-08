#include "Widget.h"

UWidget::UWidget() {
    this->Slot = NULL;
    this->ToolTipWidget = NULL;
    this->bIsVariable = true;
    this->bCreatedByConstructionScript = false;
    this->bIsEnabled = true;
    this->bOverride_Cursor = false;
    this->AccessibleWidgetData = NULL;
    this->bIsVolatile = false;
    this->Cursor = EMouseCursor::Default;
    this->Clipping = EWidgetClipping::Inherit;
    this->Visibility = ESlateVisibility::Visible;
    this->RenderOpacity = 1.00f;
    this->Navigation = NULL;
    this->FlowDirectionPreference = EFlowDirectionPreference::Inherit;
}

void UWidget::SetVisibility(ESlateVisibility InVisibility) {
}

void UWidget::SetUserFocus(APlayerController* PlayerController) {
}

void UWidget::SetToolTipText(const FText& InToolTipText) {
}

void UWidget::SetToolTip(UWidget* Widget) {
}

void UWidget::SetRenderTranslation(FVector2D Translation) {
}

void UWidget::SetRenderTransformPivot(FVector2D Pivot) {
}

void UWidget::SetRenderTransformAngle(float Angle) {
}

void UWidget::SetRenderTransform(FWidgetTransform InTransform) {
}

void UWidget::SetRenderShear(FVector2D Shear) {
}

void UWidget::SetRenderScale(FVector2D Scale) {
}

void UWidget::SetRenderOpacity(float InOpacity) {
}

void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget) {
}

void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate) {
}

void UWidget::SetNavigationRuleCustom(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate) {
}

void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule) {
}

void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus) {
}

void UWidget::SetKeyboardFocus() {
}

void UWidget::SetIsEnabled(bool bInIsEnabled) {
}

void UWidget::SetFocus() {
}

void UWidget::SetCursor(TEnumAsByte<EMouseCursor::Type> InCursor) {
}

void UWidget::SetClipping(EWidgetClipping InClipping) {
}

void UWidget::SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus) {
}

void UWidget::ResetCursor() {
}

void UWidget::RemoveFromParent() {
}

bool UWidget::IsVisible() const {
    return false;
}

bool UWidget::IsHovered() const {
    return false;
}

void UWidget::InvalidateLayoutAndVolatility() {
}

bool UWidget::HasUserFocusedDescendants(APlayerController* PlayerController) const {
    return false;
}

bool UWidget::HasUserFocus(APlayerController* PlayerController) const {
    return false;
}

bool UWidget::HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex) const {
    return false;
}

bool UWidget::HasMouseCapture() const {
    return false;
}

bool UWidget::HasKeyboardFocus() const {
    return false;
}

bool UWidget::HasFocusedDescendants() const {
    return false;
}

bool UWidget::HasAnyUserFocus() const {
    return false;
}

ESlateVisibility UWidget::GetVisibility() const {
    return ESlateVisibility::Visible;
}

FGeometry UWidget::GetTickSpaceGeometry() const {
    return FGeometry{};
}

float UWidget::GetRenderTransformAngle() const {
    return 0.0f;
}

float UWidget::GetRenderOpacity() const {
    return 0.0f;
}

UPanelWidget* UWidget::GetParent() const {
    return NULL;
}

FGeometry UWidget::GetPaintSpaceGeometry() const {
    return FGeometry{};
}

APlayerController* UWidget::GetOwningPlayer() const {
    return NULL;
}

ULocalPlayer* UWidget::GetOwningLocalPlayer() const {
    return NULL;
}

bool UWidget::GetIsEnabled() const {
    return false;
}

UGameInstance* UWidget::GetGameInstance() const {
    return NULL;
}

FVector2D UWidget::GetDesiredSize() const {
    return FVector2D{};
}

EWidgetClipping UWidget::GetClipping() const {
    return EWidgetClipping::Inherit;
}

FGeometry UWidget::GetCachedGeometry() const {
    return FGeometry{};
}

void UWidget::ForceVolatile(bool bForce) {
}

void UWidget::ForceLayoutPrepass() {
}


