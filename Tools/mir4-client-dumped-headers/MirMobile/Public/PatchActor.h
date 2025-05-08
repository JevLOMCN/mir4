#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PatchActor.generated.h"

class AMiniGame_ManagerActor;
class UMM_PatchWidget;

UCLASS(Blueprintable)
class APatchActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iActiveDownloadPakMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PatchWidget* m_PatchWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMiniGame_ManagerActor* m_MiniGameActor;
    
public:
    APatchActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartPatchPakDownload_WithPatchMovie_Request();
    
    UFUNCTION(BlueprintCallable)
    void StartPatchPakDownload_WithPatchMovie_Excute();
    
    UFUNCTION(BlueprintCallable)
    void StartPatchPakDownload_WithMiniGame_Request();
    
    UFUNCTION(BlueprintCallable)
    void StartPatchPakDownload_WithMiniGame_Excute();
    
    UFUNCTION(BlueprintCallable)
    void StartPatchPakDownload_WithMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void StartPatchPakDownload();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToLogin();
    
    UFUNCTION(BlueprintCallable)
    void ReserveEndPatch();
    
    UFUNCTION(BlueprintCallable)
    void OnVersionCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnTableInfoDownload();
    
    UFUNCTION(BlueprintCallable)
    void OnTableDownload();
    
    UFUNCTION(BlueprintCallable)
    void OnServerInfoDownload();
    
    UFUNCTION(BlueprintCallable)
    void OnPatchPakDownloadAllCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnPatchPakDownload();
    
    UFUNCTION(BlueprintCallable)
    void OnPatchInfoDownload();
    
    UFUNCTION(BlueprintCallable)
    void OnMarketUpdateCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnMarketUpdateByLocalSave();
    
    UFUNCTION(BlueprintCallable)
    void OnMarketUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void EndPatch();
    
};

