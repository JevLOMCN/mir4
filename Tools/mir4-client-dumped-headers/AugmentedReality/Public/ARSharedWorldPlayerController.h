#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "ARSharedWorldPlayerController.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API AARSharedWorldPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AARSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMarkReadyForReceiving();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
    
};

