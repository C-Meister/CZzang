#include "ZLayout.h"


namespace czzang {

	ZMargin* ZLayout::getLayoutMargin() const {
		return this->layout_margin_;
	}
	void ZLayout::setLayoutMargin(const ZMargin& layout_margin) {
		this->layout_margin_ = new ZMargin(layout_margin);
	}
	std::vector<ZObject>* ZLayout::getChild() const {
		return this->child_;
	}
	void ZLayout::setChild(const std::vector<ZObject>& child) {
		this->child_ = new std::vector<ZObject>(child);
	}
}