#include "FirebaseVariant.h"

UFirebaseVariant::UFirebaseVariant() {
    this->DataType = VariantType::Null;
    this->Int64Value = 0;
    this->FloatValue = 0.00f;
    this->BoolValue = false;
}

UFirebaseVariant* UFirebaseVariant::CreateVariantVector(const TArray<UFirebaseVariant*>& Value) {
    return NULL;
}

UFirebaseVariant* UFirebaseVariant::CreateVariantString(const FString& Value) {
    return NULL;
}

UFirebaseVariant* UFirebaseVariant::CreateVariantMap(const TMap<FString, UFirebaseVariant*>& Value) {
    return NULL;
}

UFirebaseVariant* UFirebaseVariant::CreateVariantInt64(int64 Value) {
    return NULL;
}

UFirebaseVariant* UFirebaseVariant::CreateVariantFloat(float Value) {
    return NULL;
}

UFirebaseVariant* UFirebaseVariant::CreateVariantBool(bool Value) {
    return NULL;
}


