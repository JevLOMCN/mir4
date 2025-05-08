#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TutorialHighlightWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTutorialHighlightWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MainTypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetIndex;
    
    UTutorialHighlightWidget();

    UFUNCTION(BlueprintCallable)
    void SetTypeID(int32 MainID, FName TargetName);
    
    UFUNCTION(BlueprintCallable)
    void ResetAddHighLight();
    
};

