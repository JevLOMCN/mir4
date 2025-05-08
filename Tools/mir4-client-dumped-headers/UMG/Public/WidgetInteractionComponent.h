#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EWidgetInteractionSource.h"
#include "OnHoveredWidgetChangedDelegate.h"
#include "WidgetInteractionComponent.generated.h"

class UWidget;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMG_API UWidgetInteractionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoveredWidgetChanged OnHoveredWidgetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VirtualUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetInteractionSource InteractionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHitTesting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DebugColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult CustomHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D LocalHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D LastLocalHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* HoveredWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LastHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHoveredWidgetInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHoveredWidgetFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHoveredWidgetHitTestVisible;
    
public:
    UWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFocus(UWidget* FocusWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool SendKeyChar(const FString& Characters, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWheel(float ScrollDelta);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void PressPointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool PressKey(FKey Key, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    bool PressAndReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverInteractableWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverHitTestVisibleWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverFocusableWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult GetLastHitResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetHoveredWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D Get2DHitLocation() const;
    
};

