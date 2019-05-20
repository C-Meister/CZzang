#include "ZMargin.h"


namespace czzang {
	const int& ZMargin::getRight() const {
		return this->right_;
	}
	void ZMargin::setRight(const int& right) {
		this->right_ = right;
	}
	const int& ZMargin::getUp() const {
		return this->up_;
	}
	void ZMargin::setUp(const int& up) {
		this->up_ = up;
	}
}