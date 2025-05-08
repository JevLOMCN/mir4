#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseLockMode -FallbackName=EMouseLockMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWindowTitleBarMode -FallbackName=EWindowTitleBarMode
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=AnalogInputEvent -FallbackName=AnalogInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CharacterEvent -FallbackName=CharacterEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EColorVisionDeficiency -FallbackName=EColorVisionDeficiency
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=InputEvent -FallbackName=InputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=NavigationEvent -FallbackName=NavigationEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EventReply.h"
#include "PaintContext.h"
#include "Templates/SubclassOf.h"
#include "WidgetBlueprintLibrary.generated.h"

class APlayerController;
class IInterface;
class UInterface;
class UDragDropOperation;
class UFont;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class USlateBrushAsset;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnGameWindowCloseButtonClickedDelegate);
    
    UWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply UnlockMouse(UPARAM(Ref) FEventReply& Reply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply Unhandled();
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitleBarOnCloseClickedDelegate(UWidgetBlueprintLibrary::FOnGameWindowCloseButtonClickedDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitleBarCloseButtonActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply SetUserFocus(UPARAM(Ref) FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply SetMousePosition(UPARAM(Ref) FEventReply& Reply, FVector2D NewMousePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameOnly(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetFocusToGameViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushResourceToTexture(UPARAM(Ref) FSlateBrush& Brush, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushResourceToMaterial(UPARAM(Ref) FSlateBrush& Brush, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static void RestorePreviousWindowTitleBarState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply ReleaseMouseCapture(UPARAM(Ref) FEventReply& Reply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply ReleaseJoystickCapture(UPARAM(Ref) FEventReply& Reply, bool bInAllJoysticks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush NoResourceBrush();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply LockMouse(UPARAM(Ref) FEventReply& Reply, UWidget* CapturingWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsDragDropping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply Handled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInstanceDynamic* GetDynamicMaterial(UPARAM(Ref) FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static UDragDropOperation* GetDragDroppingContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetBrushResourceAsTexture2D(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInterface* GetBrushResourceAsMaterial(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetBrushResource(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UInterface> Interface, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply EndDragDrop(UPARAM(Ref) FEventReply& Reply);
    
    UFUNCTION(BlueprintCallable)
    static void DrawTextFormatted(UPARAM(Ref) FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static void DrawText(UPARAM(Ref) FPaintContext& Context, const FString& inString, FVector2D Position, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLines(UPARAM(Ref) FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLine(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBox(UPARAM(Ref) FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void DismissAllMenus();
    
    UFUNCTION(BlueprintCallable)
    static FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply DetectDrag(UPARAM(Ref) FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey);
    
    UFUNCTION(BlueprintCallable)
    static UDragDropOperation* CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UUserWidget* Create(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply ClearUserFocus(UPARAM(Ref) FEventReply& Reply, bool bInAllUsers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply CaptureMouse(UPARAM(Ref) FEventReply& Reply, UWidget* CapturingWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventReply CaptureJoystick(UPARAM(Ref) FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks);
    
    UFUNCTION(BlueprintCallable)
    static void CancelDragDrop();
    
};

