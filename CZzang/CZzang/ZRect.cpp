#include "ZRect.h"

namespace czzang {
	const int& ZRect::getBorderRadius() const {
		return this->border_radius_;
	}
	void ZRect::setBorderRadius(const int& border_radius) {
		this->border_radius_ = border_radius;
	}
}
