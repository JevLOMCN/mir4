#include "AGContactsBPL.h"

UAGContactsBPL::UAGContactsBPL() {
}

FString UAGContactsBPL::GetUserPhoneNumber() {
    return TEXT("");
}

TArray<FAGContact> UAGContactsBPL::GetContactsWithNumber(const FString& Number) {
    return TArray<FAGContact>();
}

TArray<FAGContact> UAGContactsBPL::GetContactsWithName(const FString& Name) {
    return TArray<FAGContact>();
}

TArray<FAGContact> UAGContactsBPL::GetAllContacts() {
    return TArray<FAGContact>();
}

bool UAGContactsBPL::AddContact(FAGContact contact) {
    return false;
}


