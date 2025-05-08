#include "AnimCompress_ACL.h"

UAnimCompress_ACL::UAnimCompress_ACL() {
    this->Description = TEXT("ACL");
    this->bNeedsSkeleton = true;
    this->CompressionLevel = ACLCL_Medium;
    this->DefaultVirtualVertexDistance = 3.00f;
    this->SafeVirtualVertexDistance = 100.00f;
    this->SafetyFallbackThreshold = 1.00f;
    this->ErrorThreshold = 0.01f;
}


