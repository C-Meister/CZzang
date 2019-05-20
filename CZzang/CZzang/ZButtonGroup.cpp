#include "ZButtonGroup.h"

namespace czzang {

	ZButtonGroup::ZButtonGroup()
	{
	}
	ZButtonGroup::~ZButtonGroup()
	{
	}

	const std::vector<ZAbstractButton>& ZButtonGroup::getButtons() const {
		return this->buttons_;
	}
	void ZButtonGroup::setButtons(const std::vector<ZAbstractButton>& buttons) {
		this->buttons_ = buttons;
	}

	const ZAbstractButton& ZButtonGroup::getSelection() const{

	}

	const int& ZButtonGroup::getSelectionIndex() const{

	}
}