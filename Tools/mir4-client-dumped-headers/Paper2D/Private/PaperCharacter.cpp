#include "PaperCharacter.h"
#include "PaperFlipbookComponent.h"

APaperCharacter::APaperCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this)) = NULL;
    this->Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite0"));
    this->Sprite->SetupAttachment(RootComponent);
}


