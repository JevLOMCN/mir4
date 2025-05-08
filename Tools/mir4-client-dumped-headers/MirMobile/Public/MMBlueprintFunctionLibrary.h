#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugFloatHistory -FallbackName=DebugFloatHistory
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EACTION_RESULT.h"
#include "EWorld_Type.h"
#include "LOAD_RESULT.h"
#include "Templates/SubclassOf.h"
#include "MMBlueprintFunctionLibrary.generated.h"

class AActor;
class AMM_MainPC;
class AMM_Monster;
class AMM_NetPC;
class UDataTable;
class UImage;
class ULevelStreaming;
class UNavigationQueryFilter;
class UObject;
class USkeletalMesh;
class USkinnedMeshComponent;
class USoundClass;
class UWidget;
class UWorld;

UCLASS(Blueprintable)
class UMMBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMMBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WorldType_InEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WITH_EDITOR_BP();
    
    UFUNCTION(BlueprintCallable)
    static void ViewprotFadeInOut(float Opacity, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void ViewprotFade(float Opacity, float Duration, float FirstDelay);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void UnloadStreamLevel(ULevelStreaming* pStremingLevel, FName LevelName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleAllWidget(bool bShow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorByString(UObject* WorldContextObject, const FString& ReferenceName, FVector vLoc, FRotator rRot, TEnumAsByte<LOAD_RESULT>& LoadType);
    
    UFUNCTION(BlueprintCallable)
    static bool SoundVolumeChange(USoundClass* SoundClassObject, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureBrush(UObject* pSprite, UImage* pImage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetSkeletalMeshVertex(UObject* WorldContextObject, USkinnedMeshComponent* pSourceMesh, USkinnedMeshComponent* pNewMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RelationScriptExecute(UObject* WorldContextObject, TArray<FString> ScriptData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PLATFORM_WIN64();
    
    UFUNCTION(BlueprintCallable)
    static void OpenTextPopup(const FString& MessageString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MirScriptExecute(UObject* WorldContextObject, TArray<FString> ScriptData);
    
    UFUNCTION(BlueprintCallable)
    static bool MarkPackageDirty(UObject* DirtyObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* LoadObjectByObjectPath(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* LoadIcon(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSimulateInEditorViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPhasingMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNavigationPathExists(const UObject* Object, FVector Start, FVector End, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMirDebugMode();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetWorldType_BP(UObject* WorldContextObject, EWorld_Type& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTemplateString(int32 StringID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMM_NetPC* GetTargetNetPC(UObject* WorldContextObject, EACTION_RESULT& ActionResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMM_Monster* GetTargetMonster(UObject* WorldContextObject, EACTION_RESULT& ActionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSvnID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMesh* GetSkeletalMesh(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerClassID();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="pWorldContextObject"))
    static AActor* GetPickedActor(UObject* pWorldContextObject, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetMirDataTable(const FString& TableTypeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMessageString(int32 StringID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AMM_MainPC* GetMainPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* GetGameWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentStageID();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> GetChildWidget(UWidget* pWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAbsolutePosition(UWidget* pWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FixDrawDebugSolidBox(UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    static void DrawNavigationPath(const UObject* Object, bool bStraight, FVector Start, FVector End, FLinearColor Color, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FDebugFloatHistory DrawDebugFloat(UObject* WorldContextObject, const FString& Title, FDebugFloatHistory FloatHistory, float DrawX, float DrawY, float DrawSizeX, float DrawSizeY, float HistoryValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertToSoftObjectPath(const FString& ObjectPath);
    
};

