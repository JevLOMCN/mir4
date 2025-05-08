#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "ARSharedWorldGameMode.generated.h"

class AARSharedWorldGameState;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class AUGMENTEDREALITY_API AARSharedWorldGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferSizePerChunk;
    
    AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPreviewImageData(TArray<uint8> ImageData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetARWorldSharingIsReady();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AARSharedWorldGameState* GetARSharedWorldGameState();
    
};

