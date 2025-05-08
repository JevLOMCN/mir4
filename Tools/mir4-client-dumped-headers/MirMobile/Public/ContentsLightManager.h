#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EContentsLightType.h"
#include "EPlayerClassID.h"
#include "ContentsLightManager.generated.h"

class ADirectionalLight;
class AMM_PostProcessVolume;
class APointLight;
class UContentsLightData;

UCLASS(Blueprintable)
class AContentsLightManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLight* m_pUIDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APointLight* m_pUIPointLight1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APointLight* m_pUIPointLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_PostProcessVolume* m_pUIPostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLight* m_pCustomizeDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APointLight* m_pCustomizePointLight1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APointLight* m_pCustomizePointLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_PostProcessVolume* m_pCustomizePostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UContentsLightData* m_pContentsLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentsLightType CurrentContentsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerClassID CurrentClassID;
    
    AContentsLightManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCustomizingLight(ADirectionalLight* pDirectional, APointLight* pPoint1, APointLight* pPoint2);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSceneEffect(ADirectionalLight* pDirectional, APointLight* pPoint1, APointLight* pPoint2, AMM_PostProcessVolume* pPostProcess);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomizingLight();
    
    UFUNCTION(BlueprintCallable)
    void ChangePostProcessData();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLightData();
    
};

