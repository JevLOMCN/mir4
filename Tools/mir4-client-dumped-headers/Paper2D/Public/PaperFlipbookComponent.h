#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "FlipbookFinishedPlaySignatureDelegate.h"
#include "PaperFlipbookComponent.generated.h"

class UBodySetup;
class UMaterialInterface;
class UPaperFlipbook;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperFlipbookComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SourceFlipbook, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* SourceFlipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReversePlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlaying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedFrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor SpriteColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* CachedBodySetup;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookFinishedPlaySignature OnFinishedPlaying;
    
    UPaperFlipbookComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetSpriteColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(float NewPosition, bool bFireEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetNewTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetFlipbook(UPaperFlipbook* NewFlipbook);
    
    UFUNCTION(BlueprintCallable)
    void ReverseFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void Reverse();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReversing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaybackPositionInFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlipbookLengthInFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlipbookLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlipbookFramerate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperFlipbook* GetFlipbook();
    
};

