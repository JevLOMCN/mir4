#include "MM_PhotoModeCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "MM_CharacterPartsComponent.h"

AMM_PhotoModeCharacter::AMM_PhotoModeCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pPhotoModeData = NULL;
    this->m_pSprintArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->m_pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->m_bMyCharacterHide = false;
    this->m_pPhotoModeAnimInstance = NULL;
    this->m_pPhotoModeWidget = NULL;
    this->m_pSprintArm->SetupAttachment(RootComponent);
    this->m_pCamera->SetupAttachment(m_pSprintArm);
    this->m_pMesh->SetupAttachment(RootComponent);
}

void AMM_PhotoModeCharacter::TestFunction() {
}

void AMM_PhotoModeCharacter::ScreenShotCaptured(int32 ScreenWidth, int32 ScreenHeight, const TArray<FColor>& ScreenColors) {
}


void AMM_PhotoModeCharacter::InitLoadComplete() {
}


