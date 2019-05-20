#include "ZAbstractSlider.h"

namespace czzang {

	const int& ZAbstractSlider::getMinimum() const {
		return this->minimum_;
	}
	void ZAbstractSlider::setMinimum(const int& minimum) {
		this->minimum_ = minimum;
	}
	const int& ZAbstractSlider::getMaximum() const {
		return this->maximum_;
	}
	void ZAbstractSlider::setMaximum(const int& maximum) {
		this->maximum_ = maximum;
	}
	const int& ZAbstractSlider::getValue() const {
		return this->value_;
	}
	void ZAbstractSlider::setValue(const int& value) {
		this->value_ = value;
	}
	ZAlignment* ZAbstractSlider::getOrientation() const {
		return this->orientation_;
	}
	void ZAbstractSlider::setOrientation(const ZAlignment& orientation) {
		this->orientation_ = new ZAlignment(orientation);
	}
	const int& ZAbstractSlider::getSingleStep() const {
		return this->single_step_;
	}
	void ZAbstractSlider::setSingleStep(const int& single_step) {
		this->single_step_ = single_step;
	}
	const int& ZAbstractSlider::getPageStep() const {
		return this->page_step_;
	}
	void ZAbstractSlider::setPageStep(const int& page_step) {
		this->page_step_ = page_step;
	}
	ZGraphics* ZAbstractSlider::getBox() const {
		return this->box_;
	}
	void ZAbstractSlider::setBox(const ZGraphics& box) {
		this->box_ = new ZGraphics(box);
	}
	ZGraphics* ZAbstractSlider::getBar() const {
		return this->bar_;
	}
	void ZAbstractSlider::setBar(const ZGraphics& bar) {
		this->bar_ = new ZGraphics(bar);
	}
	const ZFlow& ZAbstractSlider::getFlow() const {
		return this->e_flow_;
	}
	void ZAbstractSlider::setFlow(const ZFlow& flow) {
		this->e_flow_ = flow;
	}

}