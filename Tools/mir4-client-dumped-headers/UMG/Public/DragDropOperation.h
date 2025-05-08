#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "EDragPivot.h"
#include "OnDragDropMulticastDelegate.h"
#include "DragDropOperation.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UMG_API UDragDropOperation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DefaultDragVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragPivot Pivot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDragDropMulticast OnDrop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDragDropMulticast OnDragCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDragDropMulticast OnDragged;
    
    UDragDropOperation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Drop(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dragged(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DragCancelled(const FPointerEvent& PointerEvent);
    
};

