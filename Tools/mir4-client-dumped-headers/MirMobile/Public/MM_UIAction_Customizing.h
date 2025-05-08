#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Customizing.generated.h"

class AMM_CharacterCustomizingActor;
class APlayerModelingActor;
class UDataTable;

UCLASS(Blueprintable)
class UMM_UIAction_Customizing : public UMM_UIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerModelingActor* DisplayActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCategoryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pComponentTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_CharacterCustomizingActor* m_pCustomizingActor;
    
public:
    UMM_UIAction_Customizing();

    UFUNCTION(BlueprintCallable)
    void UpdateData(int32 CustomizingType, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SendFaceJob();
    
    UFUNCTION(BlueprintCallable)
    void RevertSettingData();
    
    UFUNCTION(BlueprintCallable)
    void PopupSalonCostUsePopup();
    
    UFUNCTION(BlueprintCallable)
    void PopupSalonCostItemAdd();
    
    UFUNCTION(BlueprintCallable)
    void PopupAutoLoadCustomizingData();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoLoadCustomizingData();
    
    UFUNCTION(BlueprintCallable)
    void InitLoadCompleteActor();
    
    UFUNCTION(BlueprintCallable)
    void DisplayActorInitComplete();
    
    UFUNCTION(BlueprintCallable)
    void CheckSalonCostUsePopup();
    
};

