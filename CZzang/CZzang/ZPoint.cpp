#include "ZPoint.h"

namespace czzang {
	const int& ZPoint::getX() const {
		return this->x_;
	}
	void ZPoint::setX(const int& x) {
		this->x_ = x;
	}
	const int& ZPoint::getY() const {
		return this->y_;
	}
	void ZPoint::setY(const int& y) {
		this->y_ = y;
	}
}


