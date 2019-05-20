#include "ZArc.h"


namespace czzang {

	ZPoint* ZArc::getCenterPoint() const {
		return this->center_point_;
	}
	void ZArc::setCenterPoint(ZPoint* center_point) {
		this->center_point_ = center_point;
	}
	const bool& ZArc::isClockwise() const {
		return this->clockwise_;
	}
	void ZArc::setClockwise(const bool& clockwise) {
		this->clockwise_ = clockwise;
	}

}