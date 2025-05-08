#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BoneControlData.h"
#include "BoneCustomizingData.h"
#include "FinalBoneOffset.h"
#include "MM_CustomizingDataActor.generated.h"

class AUIBackGroundActor;
class UPoseableMeshComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_CustomizingDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBoneCustomizingData> m_BoneCustomDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_HairColorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_EyeColorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_LipColorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_SkinColorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_ClothColorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> m_HairMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> m_FaceMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> m_BodyMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneControlData> m_ControlArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pDefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pHairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pPoseableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HeadRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HeadRotationReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EyeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* m_pUIBackGroundActor;
    
    AMM_CustomizingDataActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetControlData(const FString& strKey, float SlideValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveSetting();
    
    UFUNCTION(BlueprintCallable)
    void SaveCustomizingValueData();
    
    UFUNCTION(BlueprintCallable)
    void SaveBoneData();
    
    UFUNCTION(BlueprintCallable)
    void LoadCustomizingValueData();
    
    UFUNCTION(BlueprintCallable)
    void LoadBoneData();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFinalBoneOffset> GetTotalBoneOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSpringControlValue(TArray<float>& StiffnessArray, TArray<float>& Damping);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetLimitValue(float& HeadLimitYaw, float& EyeLimitYaw, float& EyeLimitPitch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCameraData(TArray<FTransform>& CameraTransform, TArray<float>& CameraFov);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* DuplicateSkeletalMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCustomBone();
    
};

