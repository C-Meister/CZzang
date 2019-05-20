#pragma once
#include "CZzang.h"
#include "ZAbstractButton.h"

namespace czzang {
	class ZButtonGroup 
	{
	private:
		std::vector<ZAbstractButton> buttons_;
	public:
		const std::vector<ZAbstractButton>& getButtons() const;
		void setButtons(const std::vector<ZAbstractButton>& buttons);

		const ZAbstractButton& getSelection() const;
		const int& getSelectionIndex() const;

}