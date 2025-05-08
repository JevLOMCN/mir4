#include "PortalInfoExporter.h"

APortalInfoExporter::APortalInfoExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bExport = false;
    this->m_bImport = false;
}


