#include "AnimCompress_ACLCustom.h"

UAnimCompress_ACLCustom::UAnimCompress_ACLCustom() {
    this->Description = TEXT("ACL Custom");
    this->bNeedsSkeleton = true;
    this->DefaultVirtualVertexDistance = 3.00f;
    this->SafeVirtualVertexDistance = 100.00f;
    this->CompressionLevel = ACLCL_Medium;
    this->RotationFormat = ACLRF_QuatDropW_Variable;
    this->TranslationFormat = ACLVF_Vector3_Variable;
    this->ScaleFormat = ACLVF_Vector3_Variable;
    this->ErrorThreshold = 0.01f;
    this->ConstantRotationThresholdAngle = 0.00f;
    this->ConstantTranslationThreshold = 0.00f;
    this->ConstantScaleThreshold = 0.00f;
    this->bClipRangeReduceRotations = true;
    this->bClipRangeReduceTranslations = true;
    this->bClipRangeReduceScales = true;
    this->EnableSegmenting = true;
    this->bSegmentRangeReduceRotations = true;
    this->bSegmentRangeReduceTranslations = true;
    this->bSegmentRangeReduceScales = true;
    this->IdealNumKeyFramesPerSegment = 16;
    this->MaxNumKeyFramesPerSegment = 31;
}


