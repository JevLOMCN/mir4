#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WidgetBase.h"
#include "MM_VehicleInfo.generated.h"

class AVehicleRenderRoom;
class UMM_UI_Drag;

UCLASS(Blueprintable, EditInlineNew)
class UMM_VehicleInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVehicleRenderRoom* m_pRenderRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UI_Drag* m_UI_Drag;
    
public:
    UMM_VehicleInfo();

private:
    UFUNCTION(BlueprintCallable)
    void OnDragScreen(const FVector2D DragDelta);
    
};

