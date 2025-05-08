#include "LevelSequenceActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingOverrides -FallbackName=MovieSceneBindingOverrides
#include "DefaultLevelSequenceInstanceData.h"
#include "LevelSequenceBurnInOptions.h"
#include "LevelSequencePlayer.h"
#include "Net/UnrealNetwork.h"

ALevelSequenceActor::ALevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->SequencePlayer = CreateDefaultSubobject<ULevelSequencePlayer>(TEXT("AnimationPlayer"));
    this->BurnInOptions = CreateDefaultSubobject<ULevelSequenceBurnInOptions>(TEXT("BurnInOptions"));
    this->BindingOverrides = CreateDefaultSubobject<UMovieSceneBindingOverrides>(TEXT("BindingOverrides"));
    this->bAutoPlay = false;
    this->bOverrideInstanceData = false;
    this->bReplicatePlayback = false;
    this->DefaultInstanceData = CreateDefaultSubobject<UDefaultLevelSequenceInstanceData>(TEXT("InstanceData"));
    this->BurnInInstance = NULL;
    this->bShowBurnin = true;
}

void ALevelSequenceActor::ShowBurnin() {
}

void ALevelSequenceActor::SetSequence(ULevelSequence* InSequence) {
}

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback) {
}

void ALevelSequenceActor::SetEventReceivers(TArray<AActor*> AdditionalReceivers) {
}

void ALevelSequenceActor::SetBindingByTag(FName BindingTag, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
}

void ALevelSequenceActor::SetBinding(FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
}

void ALevelSequenceActor::ResetBindings() {
}

void ALevelSequenceActor::ResetBinding(FMovieSceneObjectBindingID Binding) {
}

void ALevelSequenceActor::RemoveBindingByTag(FName Tag, AActor* Actor) {
}

void ALevelSequenceActor::RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor) {
}

ULevelSequence* ALevelSequenceActor::LoadSequence() const {
    return NULL;
}

void ALevelSequenceActor::HideBurnin() {
}

ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer() const {
    return NULL;
}

ULevelSequence* ALevelSequenceActor::GetSequence() const {
    return NULL;
}

TArray<FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(FName Tag) const {
    return TArray<FMovieSceneObjectBindingID>();
}

FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(FName Tag) const {
    return FMovieSceneObjectBindingID{};
}

void ALevelSequenceActor::AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset) {
}

void ALevelSequenceActor::AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset) {
}

void ALevelSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelSequenceActor, SequencePlayer);
}


