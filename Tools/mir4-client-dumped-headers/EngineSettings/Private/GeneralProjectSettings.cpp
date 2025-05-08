#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("WemadeEntertainment");
    this->CopyrightNotice = TEXT("Fill out your copyright notice in the Description page of Project Settings.");
    this->Description = TEXT("Mir Mobile");
    this->ProjectName = TEXT("Mir Mobile");
    this->ProjectVersion = TEXT("0.0.1");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Nexus MIR4 Alpha v3"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT(" "));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bStartInAR = false;
    this->bSupportAR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}


