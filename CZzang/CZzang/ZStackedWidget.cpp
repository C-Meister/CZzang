#include "ZStackedWidget.h"

namespace czzang {
	const int& ZStackedWidget::getCurrentIndex() const {
		return this->current_index_;
	}
	void ZStackedWidget::setCurrentIndex(const int& current_index) {
		this->current_index_ = current_index;
	}
}