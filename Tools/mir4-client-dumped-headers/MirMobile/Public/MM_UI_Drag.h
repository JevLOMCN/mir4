#pragma once
#include "CoreMinimal.h"
#include "EDragPosType.h"
#include "ETouchPositionType.h"
#include "OnTouchEndedDelegate.h"
#include "OnTouchMovedDelegate.h"
#include "OnTouchStartedDelegate.h"
#include "WidgetBase.h"
#include "MM_UI_Drag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_UI_Drag : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETouchPositionType m_PostionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragPosType m_DragType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTouchStarted OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTouchMoved OnDrag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTouchEnded OnReleased;
    
    UMM_UI_Drag();

};

