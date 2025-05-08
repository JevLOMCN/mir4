#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFlowDirectionPreference -FallbackName=EFlowDirectionPreference
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigationRule -FallbackName=EUINavigationRule
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "CustomWidgetNavigationDelegateDelegate.h"
#include "ESlateVisibility.h"
#include "EventReply.h"
#include "Visual.h"
#include "WidgetTransform.h"
#include "Widget.generated.h"

class APlayerController;
class UGameInstance;
class ULocalPlayer;
class UObject;
class UPanelSlot;
class UPanelWidget;
class UPropertyBinding;
class USlateAccessibleWidgetData;
class UWidget;
class UWidgetNavigation;

UCLASS(Abstract, Blueprintable)
class UMG_API UWidget : public UVisual {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(FEventReply, FOnReply);
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FOnPointerEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);
    DECLARE_DYNAMIC_DELEGATE_RetVal(UWidget*, FGetWidget);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FGetText);
    DECLARE_DYNAMIC_DELEGATE_RetVal(ESlateVisibility, FGetSlateVisibility);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateColor, FGetSlateColor);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateBrush, FGetSlateBrush);
    DECLARE_DYNAMIC_DELEGATE_RetVal(TEnumAsByte<EMouseCursor::Type>, FGetMouseCursor);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FGetLinearColor);
    DECLARE_DYNAMIC_DELEGATE_RetVal(int32, FGetInt32);
    DECLARE_DYNAMIC_DELEGATE_RetVal(float, FGetFloat);
    DECLARE_DYNAMIC_DELEGATE_RetVal(ECheckBoxState, FGetCheckBoxState);
    DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FGetBool);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FGenerateWidgetForString, const FString&, Item);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FGenerateWidgetForObject, UObject*, Item);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, TextExportTransient, meta=(AllowPrivateAccess=true))
    UPanelSlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBool bIsEnabledDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetText ToolTipTextDelegate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ToolTipWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetWidget ToolTipWidgetDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSlateVisibility VisibilityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform RenderTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RenderTransformPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVariable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCreatedByConstructionScript: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Cursor: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlateAccessibleWidgetData* AccessibleWidgetData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVolatile: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMouseCursor::Type> Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetClipping Clipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetNavigation* Navigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowDirectionPreference FlowDirectionPreference;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPropertyBinding*> NativeBindings;
    
public:
    UWidget();

    UFUNCTION(BlueprintCallable)
    void SetVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetUserFocus(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTipText(const FText& InToolTipText);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTip(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTranslation(FVector2D Translation);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransformPivot(FVector2D Pivot);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransformAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransform(FWidgetTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderShear(FVector2D Shear);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderScale(FVector2D Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleCustomBoundary(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleCustom(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetCursor(TEnumAsByte<EMouseCursor::Type> InCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetClipping(EWidgetClipping InClipping);
    
    UFUNCTION(BlueprintCallable)
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void ResetCursor();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovered() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateLayoutAndVolatility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUserFocusedDescendants(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUserFocus(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMouseCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyboardFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFocusedDescendants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUserFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetTickSpaceGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderTransformAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPanelWidget* GetParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetPaintSpaceGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APlayerController* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    ULocalPlayer* GetOwningLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UGameInstance* GetGameInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDesiredSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWidgetClipping GetClipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetCachedGeometry() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceVolatile(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ForceLayoutPrepass();
    
};

