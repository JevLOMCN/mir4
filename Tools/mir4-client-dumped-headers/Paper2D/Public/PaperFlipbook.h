#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EFlipbookCollisionMode.h"
#include "PaperFlipbookKeyFrame.h"
#include "PaperFlipbook.generated.h"

class UMaterialInterface;
class UPaperSprite;

UCLASS(Blueprintable)
class PAPER2D_API UPaperFlipbook : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FramesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPaperFlipbookKeyFrame> KeyFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFlipbookCollisionMode::Type> CollisionSource;
    
public:
    UPaperFlipbook();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidKeyFrameIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetSpriteAtFrame(int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKeyFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) const;
    
};

