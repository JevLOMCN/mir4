#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EPetGuidePosType.h"
#include "WidgetBase.h"
#include "MM_TutorialPetGuideWidget.generated.h"

class UCanvasPanel;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_TutorialPetGuideWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pMainCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_pTargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPetGuidePosType m_PosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_MainCanvasSize;
    
    UMM_TutorialPetGuideWidget();

    UFUNCTION(BlueprintCallable)
    void SetTargetWidget(UWidget* targetwidget, EPetGuidePosType GuidePosType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGuideTextEvent(const FString& strText);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueSequenceEvent(const int32 StringID, int32 PlaySoundID);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInfo();
    
};

