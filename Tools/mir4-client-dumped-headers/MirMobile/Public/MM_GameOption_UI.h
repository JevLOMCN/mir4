#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_UI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_UI : public UWidgetBase {
    GENERATED_BODY()
public:
    UMM_GameOption_UI();

    UFUNCTION(BlueprintCallable)
    void OnClickUserNameOption3(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserNameOption2(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserNameOption1(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserHpBarOption3(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserHpBarOption2(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserHpBarOption1(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMyNameOption3(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMyNameOption2(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMyNameOption1(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMyHpBarOption(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMonNameOption3(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMonNameOption2(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMonNameOption1(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickGuildMarkOption(bool bChecked);
    
};

