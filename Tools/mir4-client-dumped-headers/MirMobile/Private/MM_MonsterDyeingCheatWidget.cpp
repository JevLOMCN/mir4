#include "MM_MonsterDyeingCheatWidget.h"

UMM_MonsterDyeingCheatWidget::UMM_MonsterDyeingCheatWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_Body01_R = 0.00f;
    this->m_Body01_G = 0.00f;
    this->m_Body01_B = 0.00f;
    this->m_Body01_V = 0.00f;
    this->m_pMonster = NULL;
    this->m_pPrevMonster = NULL;
}

void UMM_MonsterDyeingCheatWidget::OnClickCopy01() {
}

void UMM_MonsterDyeingCheatWidget::Change01ColorValue(float Body01_R, float Body01_G, float Body01_B, float Body01_V) {
}


