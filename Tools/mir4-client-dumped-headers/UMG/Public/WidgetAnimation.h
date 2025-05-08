#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "WidgetAnimationBinding.h"
#include "WidgetAnimationDynamicEventDelegate.h"
#include "WidgetAnimation.generated.h"

class UMovieScene;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class UWidgetAnimation : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetAnimationBinding> AnimationBindings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLegacyFinishOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayLabel;
    
public:
    UWidgetAnimation();

    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationStarted(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationFinished(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationStarted(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationFinished(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndTime() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationStarted(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationFinished(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);
    
};

