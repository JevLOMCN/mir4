#include "MMBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UMMBlueprintFunctionLibrary::UMMBlueprintFunctionLibrary() {
}

bool UMMBlueprintFunctionLibrary::WorldType_InEditor(UObject* WorldContextObject) {
    return false;
}

bool UMMBlueprintFunctionLibrary::WITH_EDITOR_BP() {
    return false;
}

void UMMBlueprintFunctionLibrary::ViewprotFadeInOut(float Opacity, float Duration) {
}

void UMMBlueprintFunctionLibrary::ViewprotFade(float Opacity, float Duration, float FirstDelay) {
}

void UMMBlueprintFunctionLibrary::UnloadStreamLevel(ULevelStreaming* pStremingLevel, FName LevelName, FLatentActionInfo LatentInfo) {
}

void UMMBlueprintFunctionLibrary::ToggleAllWidget(bool bShow) {
}

AActor* UMMBlueprintFunctionLibrary::SpawnActorByString(UObject* WorldContextObject, const FString& ReferenceName, FVector vLoc, FRotator rRot, TEnumAsByte<LOAD_RESULT>& LoadType) {
    return NULL;
}

bool UMMBlueprintFunctionLibrary::SoundVolumeChange(USoundClass* SoundClassObject, float NewVolume) {
    return false;
}

void UMMBlueprintFunctionLibrary::SetTextureBrush(UObject* pSprite, UImage* pImage) {
}

bool UMMBlueprintFunctionLibrary::SetSkeletalMeshVertex(UObject* WorldContextObject, USkinnedMeshComponent* pSourceMesh, USkinnedMeshComponent* pNewMesh) {
    return false;
}

void UMMBlueprintFunctionLibrary::RelationScriptExecute(UObject* WorldContextObject, TArray<FString> ScriptData) {
}

bool UMMBlueprintFunctionLibrary::PLATFORM_WIN64() {
    return false;
}

void UMMBlueprintFunctionLibrary::OpenTextPopup(const FString& MessageString) {
}

void UMMBlueprintFunctionLibrary::MirScriptExecute(UObject* WorldContextObject, TArray<FString> ScriptData) {
}

bool UMMBlueprintFunctionLibrary::MarkPackageDirty(UObject* DirtyObject) {
    return false;
}

UObject* UMMBlueprintFunctionLibrary::LoadObjectByObjectPath(const FString& Filename) {
    return NULL;
}

UObject* UMMBlueprintFunctionLibrary::LoadIcon(const FString& Filename) {
    return NULL;
}

bool UMMBlueprintFunctionLibrary::IsSimulateInEditorViewport() {
    return false;
}

bool UMMBlueprintFunctionLibrary::IsPhasingMode() {
    return false;
}

bool UMMBlueprintFunctionLibrary::IsNavigationPathExists(const UObject* Object, FVector Start, FVector End, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool UMMBlueprintFunctionLibrary::IsMirDebugMode() {
    return false;
}

void UMMBlueprintFunctionLibrary::GetWorldType_BP(UObject* WorldContextObject, EWorld_Type& OutResult) {
}

FString UMMBlueprintFunctionLibrary::GetTemplateString(int32 StringID) {
    return TEXT("");
}

AMM_NetPC* UMMBlueprintFunctionLibrary::GetTargetNetPC(UObject* WorldContextObject, EACTION_RESULT& ActionResult) {
    return NULL;
}

AMM_Monster* UMMBlueprintFunctionLibrary::GetTargetMonster(UObject* WorldContextObject, EACTION_RESULT& ActionResult) {
    return NULL;
}

FString UMMBlueprintFunctionLibrary::GetSvnID() {
    return TEXT("");
}

USkeletalMesh* UMMBlueprintFunctionLibrary::GetSkeletalMesh(const FString& Filename) {
    return NULL;
}

int32 UMMBlueprintFunctionLibrary::GetPlayerClassID() {
    return 0;
}

AActor* UMMBlueprintFunctionLibrary::GetPickedActor(UObject* pWorldContextObject, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes) {
    return NULL;
}

UDataTable* UMMBlueprintFunctionLibrary::GetMirDataTable(const FString& TableTypeName) {
    return NULL;
}

FString UMMBlueprintFunctionLibrary::GetMessageString(int32 StringID) {
    return TEXT("");
}

AMM_MainPC* UMMBlueprintFunctionLibrary::GetMainPC() {
    return NULL;
}

UWorld* UMMBlueprintFunctionLibrary::GetGameWorld() {
    return NULL;
}

int32 UMMBlueprintFunctionLibrary::GetCurrentStageID() {
    return 0;
}

TArray<UWidget*> UMMBlueprintFunctionLibrary::GetChildWidget(UWidget* pWidget) {
    return TArray<UWidget*>();
}

FVector2D UMMBlueprintFunctionLibrary::GetAbsolutePosition(UWidget* pWidget) {
    return FVector2D{};
}

void UMMBlueprintFunctionLibrary::FixDrawDebugSolidBox(UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation) {
}

void UMMBlueprintFunctionLibrary::DrawNavigationPath(const UObject* Object, bool bStraight, FVector Start, FVector End, FLinearColor Color, TSubclassOf<UNavigationQueryFilter> FilterClass) {
}

FDebugFloatHistory UMMBlueprintFunctionLibrary::DrawDebugFloat(UObject* WorldContextObject, const FString& Title, FDebugFloatHistory FloatHistory, float DrawX, float DrawY, float DrawSizeX, float DrawSizeY, float HistoryValue) {
    return FDebugFloatHistory{};
}

FString UMMBlueprintFunctionLibrary::ConvertToSoftObjectPath(const FString& ObjectPath) {
    return TEXT("");
}


