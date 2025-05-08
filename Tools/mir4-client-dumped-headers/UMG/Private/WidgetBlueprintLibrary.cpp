#include "WidgetBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UWidgetBlueprintLibrary::UWidgetBlueprintLibrary() {
}

FEventReply UWidgetBlueprintLibrary::UnlockMouse(FEventReply& Reply) {
    return FEventReply{};
}

FEventReply UWidgetBlueprintLibrary::Unhandled() {
    return FEventReply{};
}

void UWidgetBlueprintLibrary::SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible) {
}

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(UWidgetBlueprintLibrary::FOnGameWindowCloseButtonClickedDelegate Delegate) {
}

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive) {
}

FEventReply UWidgetBlueprintLibrary::SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers) {
    return FEventReply{};
}

FEventReply UWidgetBlueprintLibrary::SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition) {
    return FEventReply{};
}

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode) {
}

void UWidgetBlueprintLibrary::SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport) {
}

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(APlayerController* PlayerController) {
}

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture) {
}

void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture) {
}

bool UWidgetBlueprintLibrary::SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot) {
    return false;
}

void UWidgetBlueprintLibrary::SetFocusToGameViewport() {
}

void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency) {
}

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture) {
}

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material) {
}

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState() {
}

FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(FEventReply& Reply) {
    return FEventReply{};
}

FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks) {
    return FEventReply{};
}

FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush() {
    return FSlateBrush{};
}

FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(UTexture2D* Texture, int32 Width, int32 Height) {
    return FSlateBrush{};
}

FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(UMaterialInterface* Material, int32 Width, int32 Height) {
    return FSlateBrush{};
}

FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(USlateBrushAsset* BrushAsset) {
    return FSlateBrush{};
}

FEventReply UWidgetBlueprintLibrary::LockMouse(FEventReply& Reply, UWidget* CapturingWidget) {
    return FEventReply{};
}

bool UWidgetBlueprintLibrary::IsDragDropping() {
    return false;
}

FEventReply UWidgetBlueprintLibrary::Handled() {
    return FEventReply{};
}

void UWidgetBlueprintLibrary::GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding) {
}

FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event) {
    return FKeyEvent{};
}

FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const FPointerEvent& Event) {
    return FInputEvent{};
}

FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const FNavigationEvent& Event) {
    return FInputEvent{};
}

FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const FKeyEvent& Event) {
    return FInputEvent{};
}

FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const FCharacterEvent& Event) {
    return FInputEvent{};
}

UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(FSlateBrush& Brush) {
    return NULL;
}

UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent() {
    return NULL;
}

UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const FSlateBrush& Brush) {
    return NULL;
}

UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const FSlateBrush& Brush) {
    return NULL;
}

UObject* UWidgetBlueprintLibrary::GetBrushResource(const FSlateBrush& Brush) {
    return NULL;
}

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UInterface> Interface, bool TopLevelOnly) {
}

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly) {
}

FEventReply UWidgetBlueprintLibrary::EndDragDrop(FEventReply& Reply) {
    return FEventReply{};
}

void UWidgetBlueprintLibrary::DrawTextFormatted(FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint) {
}

void UWidgetBlueprintLibrary::DrawText(FPaintContext& Context, const FString& inString, FVector2D Position, FLinearColor Tint) {
}

void UWidgetBlueprintLibrary::DrawLines(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness) {
}

void UWidgetBlueprintLibrary::DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness) {
}

void UWidgetBlueprintLibrary::DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint) {
}

void UWidgetBlueprintLibrary::DismissAllMenus() {
}

FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey) {
    return FEventReply{};
}

FEventReply UWidgetBlueprintLibrary::DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey) {
    return FEventReply{};
}

UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass) {
    return NULL;
}

UUserWidget* UWidgetBlueprintLibrary::Create(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) {
    return NULL;
}

FEventReply UWidgetBlueprintLibrary::ClearUserFocus(FEventReply& Reply, bool bInAllUsers) {
    return FEventReply{};
}

FEventReply UWidgetBlueprintLibrary::CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget) {
    return FEventReply{};
}

FEventReply UWidgetBlueprintLibrary::CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks) {
    return FEventReply{};
}

void UWidgetBlueprintLibrary::CancelDragDrop() {
}


