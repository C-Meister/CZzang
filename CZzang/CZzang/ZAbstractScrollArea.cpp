#include "ZAbstractScrollArea.h"

namespace czzang {

	ZAbstractScrollArea::ZAbstractScrollArea()
	{
	}


	ZAbstractScrollArea::~ZAbstractScrollArea()
	{
	}

	const ZScrollBarPolicy& ZAbstractScrollArea::getVerticalScrollbarPolicy() const {
		return this->e_vertical_scrollbar_policy_;
	}
	void ZAbstractScrollArea::setVerticalScrollbarPolicy(const ZScrollBarPolicy& vertical_scrollbar_policy) {
		this->e_vertical_scrollbar_policy_ = vertical_scrollbar_policy;
	}
	const ZScrollBarPolicy& ZAbstractScrollArea::getHorizontalScrollbarPolicy() const {
		return this->e_horizontal_scrollbar_policy_;
	}
	void ZAbstractScrollArea::setHorizontalScrollbarPolicy(const ZScrollBarPolicy& horizontal_scrollbar_policy) {
		this->e_horizontal_scrollbar_policy_ = horizontal_scrollbar_policy;
	}
	const ZSizeAdjustPolicy& ZAbstractScrollArea::getSizeAdjustPolicy() const {
		return this->e_size_adjust_policy_;
	}
	void ZAbstractScrollArea::setSizeAdjustPolicy(const ZSizeAdjustPolicy& size_adjust_policy) {
		this->e_size_adjust_policy_ = size_adjust_policy;
	}
	std::vector<ZObject>* ZAbstractScrollArea::getChildList() const {
		return this->child_list_;
	}
	void ZAbstractScrollArea::setChildList(std::vector<ZObject>* child_list) {
		this->child_list_ = child_list;
	}
}