#include "ZPadding.h"


namespace czzang {

	const int& ZPadding::getLeft() const {
		return this->left_;
	}
	void ZPadding::setLeft(const int& left) {
		this->left_ = left;
	}
	const int& ZPadding::getRight() const {
		return this->right_;
	}
	void ZPadding::setRight(const int& right) {
		this->right_ = right;
	}
	const int& ZPadding::getUp() const {
		return this->up_;
	}
	void ZPadding::setUp(const int& up) {
		this->up_ = up;
	}

}