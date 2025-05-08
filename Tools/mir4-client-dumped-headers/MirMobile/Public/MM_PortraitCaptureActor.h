#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPlayerClassID.h"
#include "MM_PortraitCaptureActor.generated.h"

class AMM_HQPlayerReferenceActor;
class UAnimationAsset;
class UCanvasRenderTarget2D;
class UImage;
class UMM_CharacterPartsComponent;
class UMaterialInstanceDynamic;
class UPaperSprite;
class USceneCaptureComponent2D;
class UStaticMeshComponent;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class AMM_PortraitCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* m_pSceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCanvasRenderTarget2D* m_pRenderTarget2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_CharacterRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CharacterPartsComponent* m_pPartsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerClassID, TSoftObjectPtr<UAnimationAsset>> m_mapClassPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPlayerClassID, UAnimationAsset*> m_mapClassPoseObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BackGroundMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BackgroundMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* BackGroundSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_HQPlayerReferenceActor* m_pHQPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IMAGE_SIZE_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IMAGE_SIZE_Y;
    
    AMM_PortraitCaptureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRenderTargetTest();
    
    UFUNCTION(BlueprintCallable)
    void TestPortrait();
    
    UFUNCTION(BlueprintCallable)
    void TEST_UpdatePortraitEvent();
    
    UFUNCTION(BlueprintCallable)
    void TEST_SetRenderTargetUI(UImage* pImage);
    
    UFUNCTION(BlueprintCallable)
    void TEST_SetHQPlayerLocationByPC();
    
    UFUNCTION(BlueprintCallable)
    void TEST_SetHQPlayerLocationByDefault();
    
    UFUNCTION(BlueprintCallable)
    void TEST_SetHQPlayer();
    
    UFUNCTION(BlueprintCallable)
    void TEST_Destroy();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* TEST_CaptureTest1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPortraitWidget(UTexture2D* pTexture2D);
    
    UFUNCTION(BlueprintCallable)
    void SetPortraitRenderTarget(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureCameraDataEvent(EPlayerClassID ClassType);
    
    UFUNCTION(BlueprintCallable)
    void SetBackGroundMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitCharacterTest();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* CreatePortraitTextureByRenderTarget(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CapturePortraitEvent(int32 SizeX, int32 SizeY);
    
};

