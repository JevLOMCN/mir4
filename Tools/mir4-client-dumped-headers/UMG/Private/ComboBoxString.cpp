#include "ComboBoxString.h"

UComboBoxString::UComboBoxString() {
    this->MaxListHeight = 450.00f;
    this->HasDownArrow = true;
    this->EnableGamepadNavigationMode = true;
    this->bIsFocusable = true;
}

void UComboBoxString::SetSelectedOption(const FString& Option) {
}

void UComboBoxString::SetSelectedIndex(const int32 Index) {
}

bool UComboBoxString::RemoveOption(const FString& Option) {
    return false;
}

void UComboBoxString::RefreshOptions() {
}

bool UComboBoxString::IsOpen() const {
    return false;
}

FString UComboBoxString::GetSelectedOption() const {
    return TEXT("");
}

int32 UComboBoxString::GetSelectedIndex() const {
    return 0;
}

int32 UComboBoxString::GetOptionCount() const {
    return 0;
}

FString UComboBoxString::GetOptionAtIndex(int32 Index) const {
    return TEXT("");
}

int32 UComboBoxString::FindOptionIndex(const FString& Option) const {
    return 0;
}

void UComboBoxString::ClearSelection() {
}

void UComboBoxString::ClearOptions() {
}

void UComboBoxString::AddOption(const FString& Option) {
}


