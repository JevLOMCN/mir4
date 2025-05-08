#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperTileMapActor.generated.h"

class UPaperTileMapComponent;

UCLASS(Blueprintable)
class PAPER2D_API APaperTileMapActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperTileMapComponent* RenderComponent;
    
public:
    APaperTileMapActor(const FObjectInitializer& ObjectInitializer);

};

