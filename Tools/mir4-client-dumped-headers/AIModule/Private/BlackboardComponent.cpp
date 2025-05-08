#include "BlackboardComponent.h"

UBlackboardComponent::UBlackboardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BrainComp = NULL;
    this->BlackboardAsset = NULL;
}

void UBlackboardComponent::SetValueAsVector(const FName& KeyName, FVector VectorValue) {
}

void UBlackboardComponent::SetValueAsString(const FName& KeyName, const FString& StringValue) {
}

void UBlackboardComponent::SetValueAsRotator(const FName& KeyName, FRotator VectorValue) {
}

void UBlackboardComponent::SetValueAsObject(const FName& KeyName, UObject* ObjectValue) {
}

void UBlackboardComponent::SetValueAsName(const FName& KeyName, FName NameValue) {
}

void UBlackboardComponent::SetValueAsInt(const FName& KeyName, int32 IntValue) {
}

void UBlackboardComponent::SetValueAsFloat(const FName& KeyName, float FloatValue) {
}

void UBlackboardComponent::SetValueAsEnum(const FName& KeyName, uint8 EnumValue) {
}

void UBlackboardComponent::SetValueAsClass(const FName& KeyName, UClass* ClassValue) {
}

void UBlackboardComponent::SetValueAsBool(const FName& KeyName, bool BoolValue) {
}

bool UBlackboardComponent::IsVectorValueSet(const FName& KeyName) const {
    return false;
}

FVector UBlackboardComponent::GetValueAsVector(const FName& KeyName) const {
    return FVector{};
}

FString UBlackboardComponent::GetValueAsString(const FName& KeyName) const {
    return TEXT("");
}

FRotator UBlackboardComponent::GetValueAsRotator(const FName& KeyName) const {
    return FRotator{};
}

UObject* UBlackboardComponent::GetValueAsObject(const FName& KeyName) const {
    return NULL;
}

FName UBlackboardComponent::GetValueAsName(const FName& KeyName) const {
    return NAME_None;
}

int32 UBlackboardComponent::GetValueAsInt(const FName& KeyName) const {
    return 0;
}

float UBlackboardComponent::GetValueAsFloat(const FName& KeyName) const {
    return 0.0f;
}

uint8 UBlackboardComponent::GetValueAsEnum(const FName& KeyName) const {
    return 0;
}

UClass* UBlackboardComponent::GetValueAsClass(const FName& KeyName) const {
    return NULL;
}

bool UBlackboardComponent::GetValueAsBool(const FName& KeyName) const {
    return false;
}

bool UBlackboardComponent::GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation) const {
    return false;
}

bool UBlackboardComponent::GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation) const {
    return false;
}

void UBlackboardComponent::ClearValue(const FName& KeyName) {
}


