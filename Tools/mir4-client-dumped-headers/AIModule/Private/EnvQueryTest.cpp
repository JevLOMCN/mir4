#include "EnvQueryTest.h"

UEnvQueryTest::UEnvQueryTest() {
    this->TestOrder = 0;
    this->TestPurpose = EEnvTestPurpose::FilterAndScore;
    this->MultipleContextFilterOp = EEnvTestFilterOperator::AllPass;
    this->MultipleContextScoreOp = EEnvTestScoreOperator::AverageScore;
    this->FilterType = EEnvTestFilterType::Range;
    this->ScoringEquation = EEnvTestScoreEquation::Linear;
    this->ClampMinType = EEnvQueryTestClamping::None;
    this->ClampMaxType = EEnvQueryTestClamping::None;
    this->NormalizationType = EEQSNormalizationType::Absolute;
    this->bDefineReferenceValue = false;
    this->bWorkOnFloatValues = true;
}


