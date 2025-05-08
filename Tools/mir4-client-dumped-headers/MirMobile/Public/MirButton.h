#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "EStyle_MirButton.h"
#include "MirButton.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMirButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStyle_MirButton m_eStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PRESSING_TIME;
    
    UMirButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnUnlock();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPressing();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedEvent();
    
};

