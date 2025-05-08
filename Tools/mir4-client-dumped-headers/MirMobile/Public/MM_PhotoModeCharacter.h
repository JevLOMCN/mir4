#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MM_PhotoModeCharacter.generated.h"

class UCameraComponent;
class UMM_CharacterPartsComponent;
class UMM_PhotoModeAnimInstance;
class UMM_PhotoModeWidget;
class UPhotoModeData;
class USkeletalMeshComponent;
class USpringArmComponent;
class UTexture2D;

UCLASS(Blueprintable)
class AMM_PhotoModeCharacter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MeshIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_AnimPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeData* m_pPhotoModeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* m_pSprintArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_pCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CharacterPartsComponent* m_pPartsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bMyCharacterHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_PhotoModeAnimInstance* m_pPhotoModeAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PhotoModeWidget* m_pPhotoModeWidget;
    
public:
    AMM_PhotoModeCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestFunction();
    
    UFUNCTION(BlueprintCallable)
    void ScreenShotCaptured(int32 ScreenWidth, int32 ScreenHeight, const TArray<FColor>& ScreenColors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveAndroidTextureEvent(UTexture2D* ScreenShotTexture, const FString& Filename);
    
private:
    UFUNCTION(BlueprintCallable)
    void InitLoadComplete();
    
};

