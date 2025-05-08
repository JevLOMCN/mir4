#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MM_GameModeBase.h"
#include "MM_TestCustomizingCameraGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_TestCustomizingCameraGameMode : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_LinkCameraName;
    
    AMM_TestCustomizingCameraGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetZoomValue(float ZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCameraNameComboBox(const TArray<FString>& CameraNameArray);
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
    UFUNCTION(BlueprintCallable)
    void LinkCamera(const FString& CameraName);
    
    UFUNCTION(BlueprintCallable)
    void GetCameraValue(const FString& CameraName, bool& bSucess, FVector& CamLoc, FRotator& CamRot, float& CamFOV, float& CharacterYaw);
    
    UFUNCTION(BlueprintCallable)
    void DeleteCamera(const FString& CameraName);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraValue(const FString& CameraName, FVector CamLoc, FRotator CamRot, float CamFOV, float CharacterYaw);
    
};

