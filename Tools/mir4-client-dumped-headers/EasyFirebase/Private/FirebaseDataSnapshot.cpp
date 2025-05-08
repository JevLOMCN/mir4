#include "FirebaseDataSnapshot.h"

UFirebaseDataSnapshot::UFirebaseDataSnapshot() {
}

UFirebaseVariant* UFirebaseDataSnapshot::Value() {
    return NULL;
}

UFirebaseVariant* UFirebaseDataSnapshot::Priority() {
    return NULL;
}

FString UFirebaseDataSnapshot::Key() {
    return TEXT("");
}

bool UFirebaseDataSnapshot::isValid() {
    return false;
}

bool UFirebaseDataSnapshot::HasChildren() {
    return false;
}

bool UFirebaseDataSnapshot::HasChild(const FString& Path) {
    return false;
}

bool UFirebaseDataSnapshot::Exists() {
    return false;
}

int64 UFirebaseDataSnapshot::ChildrenCount() {
    return 0;
}

TArray<UFirebaseDataSnapshot*> UFirebaseDataSnapshot::Children() {
    return TArray<UFirebaseDataSnapshot*>();
}

UFirebaseDataSnapshot* UFirebaseDataSnapshot::Child(const FString& Path) {
    return NULL;
}


