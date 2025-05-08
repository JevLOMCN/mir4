#include "AnimNode_PoseDriver.h"

FAnimNode_PoseDriver::FAnimNode_PoseDriver() {
    this->DriveSource = EPoseDriverSource::Rotation;
    this->DriveOutput = EPoseDriverOutput::DrivePoses;
    this->bOnlyDriveSelectedBones = false;
}

