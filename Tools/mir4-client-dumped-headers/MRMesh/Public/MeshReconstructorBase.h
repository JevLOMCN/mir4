#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshReconstructorBase.generated.h"

class UMRMeshComponent;

UCLASS(Blueprintable)
class MRMESH_API UMeshReconstructorBase : public UObject {
    GENERATED_BODY()
public:
    UMeshReconstructorBase();

    UFUNCTION(BlueprintCallable)
    void StopReconstruction();
    
    UFUNCTION(BlueprintCallable)
    void StartReconstruction();
    
    UFUNCTION(BlueprintCallable)
    void PauseReconstruction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReconstructionStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReconstructionPaused() const;
    
    UFUNCTION(BlueprintCallable)
    void DisconnectMRMesh();
    
    UFUNCTION(BlueprintCallable)
    void ConnectMRMesh(UMRMeshComponent* Mesh);
    
};

