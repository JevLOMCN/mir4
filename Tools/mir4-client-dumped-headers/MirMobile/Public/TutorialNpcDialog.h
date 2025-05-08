#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "TutorialNpcDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTutorialNpcDialog : public UWidgetBase {
    GENERATED_BODY()
public:
    UTutorialNpcDialog();

    UFUNCTION(BlueprintCallable)
    void SetInfo(int32 IconID, int32 dialogstringid, bool playstartanim, int32 VoiceID);
    
    UFUNCTION(BlueprintCallable)
    void PlayClose();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseAnimEnd();
    
};

