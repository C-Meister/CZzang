#include "ZWidget.h"

namespace czzang {


	ZFont* ZWidget::getFont() const {
		return this->font_;
	}
	void ZWidget::setFont(ZFont* font) {
		this->font_ = font;
	}
	ZCursor* ZWidget::getCursor() const {
		return this->cursor_;
	}
	void ZWidget::setCursor(ZCursor* cursor) {
		this->cursor_ = cursor;
	}
	const int& ZWidget::getFocusPolicy() const {
		return this->focus_policy_;
	}
	void ZWidget::setFocusPolicy(const int& focus_policy) {
		this->focus_policy_ = focus_policy;
	}
	ZToolTip* ZWidget::getTooltip() const {
		return this->tooltip_;
	}
	void ZWidget::setTooltip(ZToolTip* tooltip) {
		this->tooltip_ = tooltip;
	}
	ZGeometry* ZWidget::getGeometry() const {
		return this->geometry_;
	}
	void ZWidget::setGeometry(ZGeometry* geometry) {
		this->geometry_ = geometry;
	}

}