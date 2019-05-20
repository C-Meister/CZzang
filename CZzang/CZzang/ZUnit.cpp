#include "ZUnit.h"

namespace czzang {
	ZShape* ZUnit::getShape() const {
		return this->shape_;
	}
	void ZUnit::setShape(ZShape* shape) {
		this->shape_ = shape;
	}
	ZImage* ZUnit::getIcon() const {
		return this->icon_;
	}
	void ZUnit::setIcon(ZImage* icon) {
		this->icon_ = icon;
	}
}