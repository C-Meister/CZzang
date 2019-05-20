#include "ZEllipse.h"

namespace czzang {
	
	const int& ZEllipse::getWidth() const {
		return this->width_;
	}
	void ZEllipse::setWidth(const int& width) {
		this->width_ = width;
	}
	const int& ZEllipse::getHeight() const {
		return this->height_;
	}
	void ZEllipse::setHeight(const int& height) {
		this->height_ = height;
	}
}