#include "BlueprintGameplayTagLibrary.h"
#include "Templates/SubclassOf.h"

UBlueprintGameplayTagLibrary::UBlueprintGameplayTagLibrary() {
}

bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag) {
    return false;
}

bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(FGameplayTag A, const FString& B) {
    return false;
}

bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(FGameplayTagContainer A, const FString& B) {
    return false;
}

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B) {
    return false;
}

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B) {
    return false;
}

bool UBlueprintGameplayTagLibrary::MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch) {
    return false;
}

bool UBlueprintGameplayTagLibrary::MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    return false;
}

FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(FGameplayTagContainer Value) {
    return FGameplayTagContainer{};
}

FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(FGameplayTag Value) {
    return FGameplayTag{};
}

FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(FGameplayTagQuery TagQuery) {
    return FGameplayTagQuery{};
}

FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(FGameplayTag SingleTag) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags) {
    return FGameplayTagContainer{};
}

bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(const FGameplayTagQuery& TagQuery) {
    return false;
}

bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(FGameplayTag GameplayTag) {
    return false;
}

bool UBlueprintGameplayTagLibrary::HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch) {
    return false;
}

bool UBlueprintGameplayTagLibrary::HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    return false;
}

bool UBlueprintGameplayTagLibrary::HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    return false;
}

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer) {
    return false;
}

FName UBlueprintGameplayTagLibrary::GetTagName(const FGameplayTag& GameplayTag) {
    return NAME_None;
}

int32 UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer) {
    return 0;
}

FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer) {
    return TEXT("");
}

FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(FGameplayTag GameplayTag) {
    return TEXT("");
}

void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors) {
}

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B) {
    return false;
}

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B) {
    return false;
}

bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag) {
    return false;
}

bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& TagQuery) {
    return false;
}

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags) {
}

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer) {
}

void UBlueprintGameplayTagLibrary::AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag) {
}


