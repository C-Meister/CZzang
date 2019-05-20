#include "ZAlignment.h"

namespace czzang {
	ZAlignment::ZAlignment()
	{
	}


	ZAlignment::~ZAlignment()
	{
	}

	void ZAlignment::setHorizontial(ZHorizontalAlignment horizontal_)
	{
		this->horizontal_ = horizontal_;
	}
	ZHorizontalAlignment ZAlignment::getHorizontial()
	{
		return this->horizontal_;
	}

	void ZAlignment::setVertical(ZVerticalAlignment vertical_)
	{
		this->vertical_ = vertical_;
	}
	ZVerticalAlignment ZAlignment::getVertical()
	{
		return this->vertical_;
	}
}
