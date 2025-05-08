#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "PaperCharacter.generated.h"

class UPaperFlipbookComponent;

UCLASS(Blueprintable)
class PAPER2D_API APaperCharacter : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperFlipbookComponent* Sprite;
    
public:
    APaperCharacter(const FObjectInitializer& ObjectInitializer);

};

