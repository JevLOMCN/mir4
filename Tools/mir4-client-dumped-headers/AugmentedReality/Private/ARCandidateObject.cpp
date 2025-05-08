#include "ARCandidateObject.h"

UARCandidateObject::UARCandidateObject() {
}

void UARCandidateObject::SetFriendlyName(const FString& NewName) {
}

void UARCandidateObject::SetCandidateObjectData(const TArray<uint8>& InCandidateObject) {
}

void UARCandidateObject::SetBoundingBox(const FBox& InBoundingBox) {
}

FString UARCandidateObject::GetFriendlyName() const {
    return TEXT("");
}

TArray<uint8> UARCandidateObject::GetCandidateObjectData() const {
    return TArray<uint8>();
}

FBox UARCandidateObject::GetBoundingBox() const {
    return FBox{};
}


