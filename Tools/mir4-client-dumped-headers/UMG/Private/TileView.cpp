#include "TileView.h"

UTileView::UTileView() : UListView(FObjectInitializer::Get()) {
    this->EntryHeight = 128.00f;
    this->EntryWidth = 128.00f;
    this->TileAlignment = EListItemAlignment::EvenlyDistributed;
    this->bWrapHorizontalNavigation = false;
}

void UTileView::SetEntryWidth(float NewWidth) {
}

void UTileView::SetEntryHeight(float NewHeight) {
}


