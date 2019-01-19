#include "MainSynthGuiImpl.h"
#include "Version.h"

CMainSynthGuiImpl::CMainSynthGuiImpl()
{
	mPresetBrowser.reset(new CPresetBrowserImpl());
	
	mPresetListenerHandle = mPresetBrowser->AddListener(*this);
	mAppVersion->setText(std::string("v")+AppVersion,juce::NotificationType::dontSendNotification);

}

CMainSynthGuiImpl::~CMainSynthGuiImpl()
{
	setLookAndFeel(nullptr);
}

void CMainSynthGuiImpl::sliderValueChanged(Slider * sliderThatWasMoved)
{
	if (mListener) {
		mListener->OnValueChanged(sliderThatWasMoved->getName().toStdString(), sliderThatWasMoved->getValue());
	}
}

void CMainSynthGuiImpl::buttonClicked(Button * buttonClicked)
{
	if (mListener) {
		mListener->OnValueChanged(buttonClicked->getName().toStdString(), buttonClicked->getToggleState());
	}
	if (buttonClicked == openPresetBrowser.get()) {
		addAndMakeVisible(*mPresetBrowser.get());
		mPresetBrowser->setBounds((getWidth() - mPresetBrowser->getWidth()) / 2, 0, mPresetBrowser->getWidth(), mPresetBrowser->getHeight());
	} else if (buttonClicked == mBtnPresetNext.get()) {
		mPresetBrowser->NextPreset();
	} else if (buttonClicked == mBtnPresetPrev.get()) {
		mPresetBrowser->PreviousPreset();
	}
	else if (buttonClicked == mBtnRename.get() && mRenamePreset) {
		addAndMakeVisible(*mRenamePreset.get());
	}
}

void CMainSynthGuiImpl::SetListener(IGuiListener * listener)
{
	if (!mRenamePreset) {
		mRenamePreset.reset(new CRenamePresetGuiImpl(*listener));
	}
	mListener = listener;
}

void CMainSynthGuiImpl::OnLoadPreset(const std::string & filePath)
{
	if (mListener) {
		mListener->OnLoadPreset(filePath);
	}
}

void CMainSynthGuiImpl::SetPresetNameAndCategory(const std::string &name, const std::string &category) {
    mPresetDescr->setText(category+" / "+name, NotificationType::dontSendNotification);
}
