#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlayerModelingActor.generated.h"

class UCapsuleComponent;
class UMM_CharacterCustomizingModule;
class UMM_CharacterPartsComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable)
class APlayerModelingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CharacterPartsComponent* m_pPartsComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharacterCustomizingModule* m_CustomizingModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_ClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    APlayerModelingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestSpawn();
    
    UFUNCTION(BlueprintCallable)
    void ResetSubState();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CopySkeletalMesh(USkinnedMeshComponent* pSourceMesh, USkinnedMeshComponent* pNewMesh);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChagneMeshComplete();
    
};

