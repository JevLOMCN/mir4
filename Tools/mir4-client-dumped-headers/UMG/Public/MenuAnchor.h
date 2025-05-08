#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EMenuPlacement -FallbackName=EMenuPlacement
#include "ContentWidget.h"
#include "OnMenuOpenChangedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "Widget.h"
#include "MenuAnchor.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UMG_API UMenuAnchor : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetWidget OnGetMenuContentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMenuPlacement> Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFitInWindow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDeferPaintingAfterWindowContent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseApplicationMenuStack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuOpenChangedEvent OnMenuOpenChanged;
    
    UMenuAnchor();

    UFUNCTION(BlueprintCallable)
    void ToggleOpen(bool bFocusOnOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenDueToClick() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bFocusMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOpenSubMenus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMenuPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void FitInWindow(bool bFit);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

