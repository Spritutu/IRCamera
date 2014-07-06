#include "TempThresholdPrefUI.h"
#include "CommonUIOperator.h"
#include "UIlib.h"

TempThresholdPrefUI::TempThresholdPrefUI(DuiLib::CContainerUI* ui) {
  temp_pref_layout_ = ui;
  //initialize stable max temperature
  stable_max_ui_ = CommonUIOperator::FindSubCanEditButtonByName(ui, _T("stable_max_temp_ui"));
  unstable_aver_delta_ui_ = CommonUIOperator::FindSubCanEditButtonByName(ui, _T("unstable_aver_delta_ui"));
  unstable_aver_ui_ = CommonUIOperator::FindSubCanEditButtonByName(ui, _T("unstable_aver_ui"));
  unstable_max_delta_ui_ = CommonUIOperator::FindSubCanEditButtonByName(ui, _T("unstable_max_delta_ui"));
  unstable_max_ui_ = CommonUIOperator::FindSubCanEditButtonByName(ui, _T("unstable_max_ui"));
}

static int TStringToInt(const TString& str) {
  return wcstol(str.c_str(), NULL, 10);
}
//get the max stable temperature
int TempThresholdPrefUI::GetStableMaxTemp() const {
  return TStringToInt(stable_max_ui_->GetButtonText());
}
//get the max delta between the stable and unstable average temperature
int TempThresholdPrefUI::GetUnstableAverDeltaTemp() const {
  return TStringToInt(unstable_aver_delta_ui_->GetButtonText());
}
//get the max unstable average temperature
int TempThresholdPrefUI::GetUnstableAverTemp() const {
  return TStringToInt(unstable_aver_ui_->GetButtonText());
}
//get the max delta between unstable average temperature and the max temperature
int TempThresholdPrefUI::GetUnstableMaxDeltaTemp() const {
  return TStringToInt(unstable_max_delta_ui_->GetButtonText());
}

//get the max unstable temperature
int TempThresholdPrefUI::GetUnstableMaxTemp() const {
  return TStringToInt(unstable_max_ui_->GetButtonText());
}