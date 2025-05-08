#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterPartsMID.h"
#include "MM_CharacterCustomizingActor.generated.h"

class UMM_CharacterPartsComponent;
class UMaterialInstanceDynamic;
class UPoseableMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_CharacterCustomizingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pFaceControlMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_pFaceAreaMarkMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pMainFaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pCopyFaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CharacterPartsComponent* m_pPartsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USkeletalMeshComponent*> m_mapCustomizingMeshParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pPoseableFaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterPartsMID> m_mapCharacterMID;
    
public:
    AMM_CharacterCustomizingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitLoadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateFaceAreaMID_Event();
    
    UFUNCTION(BlueprintCallable)
    void BlueprintEvent_SetActorHiddenInGame(bool bNewHidden);
    
};

