#include "WidgetComponent.h"

UWidgetComponent::UWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Space = EWidgetSpace::World;
    this->TimingPolicy = EWidgetTimingPolicy::RealTime;
    this->WidgetClass = NULL;
    this->bManuallyRedraw = false;
    this->bRedrawRequested = true;
    this->RedrawTime = 0.00f;
    this->bDrawAtDesiredSize = false;
    this->bReceiveHardwareInput = false;
    this->bWindowFocusable = true;
    this->WindowVisibility = EWindowVisibility::SelfHitTestInvisible;
    this->bApplyGammaCorrection = false;
    this->OwnerPlayer = NULL;
    this->OpacityFromTexture = 1.00f;
    this->BlendMode = EWidgetBlendMode::Masked;
    this->bIsTwoSided = false;
    this->TickWhenOffscreen = false;
    this->Widget = NULL;
    this->BodySetup = NULL;
    this->RenderTarget = NULL;
    this->MaterialInstance = NULL;
    this->bAddedToScreen = false;
    this->bEditTimeUsable = false;
    this->bUsePointSampling = false;
    this->bDontUseZtest = false;
    this->bUseDepthScaling = true;
    this->ScreenZOffset = 0.00f;
    this->SharedLayerName = TEXT("WidgetComponentScreenLayer");
    this->LayerZOrder = -100;
    this->GeometryMode = EWidgetGeometryMode::Plane;
    this->CylinderArcAngle = 180.00f;
}

void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility) {
}

void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable) {
}

void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace) {
}

void UWidgetComponent::SetWidget(UUserWidget* NewWidget) {
}

void UWidgetComponent::SetTwoSided(const bool bWantTwoSided) {
}

void UWidgetComponent::SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity) {
}

void UWidgetComponent::SetTickWhenOffscreen(const bool bWantTickWhenOffscreen) {
}

void UWidgetComponent::SetRedrawTime(float InRedrawTime) {
}

void UWidgetComponent::SetPivot(const FVector2D& InPivot) {
}

void UWidgetComponent::SetOwnerPlayer(ULocalPlayer* LocalPlayer) {
}

void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
}

void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode) {
}

void UWidgetComponent::SetDrawSize(FVector2D Size) {
}

void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize) {
}

void UWidgetComponent::SetCylinderArcAngle(const float InCylinderArcAngle) {
}

void UWidgetComponent::SetBackgroundColor(const FLinearColor NewBackgroundColor) {
}

void UWidgetComponent::RequestRedraw() {
}

EWindowVisibility UWidgetComponent::GetWindowVisiblility() const {
    return EWindowVisibility::Visible;
}

bool UWidgetComponent::GetWindowFocusable() const {
    return false;
}

EWidgetSpace UWidgetComponent::GetWidgetSpace() const {
    return EWidgetSpace::World;
}

UUserWidget* UWidgetComponent::GetUserWidgetObject() const {
    return NULL;
}

bool UWidgetComponent::GetTwoSided() const {
    return false;
}

bool UWidgetComponent::GetTickWhenOffscreen() const {
    return false;
}

UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget() const {
    return NULL;
}

float UWidgetComponent::GetRedrawTime() const {
    return 0.0f;
}

FVector2D UWidgetComponent::GetPivot() const {
    return FVector2D{};
}

ULocalPlayer* UWidgetComponent::GetOwnerPlayer() const {
    return NULL;
}

UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance() const {
    return NULL;
}

bool UWidgetComponent::GetManuallyRedraw() const {
    return false;
}

EWidgetGeometryMode UWidgetComponent::GetGeometryMode() const {
    return EWidgetGeometryMode::Plane;
}

FVector2D UWidgetComponent::GetDrawSize() const {
    return FVector2D{};
}

bool UWidgetComponent::GetDrawAtDesiredSize() const {
    return false;
}

float UWidgetComponent::GetCylinderArcAngle() const {
    return 0.0f;
}

FVector2D UWidgetComponent::GetCurrentDrawSize() const {
    return FVector2D{};
}


