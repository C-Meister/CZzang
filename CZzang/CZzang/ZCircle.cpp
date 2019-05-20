#include "ZCircle.h"

namespace czzang {
	void ZCircle::setRadius(const int& radius)
	{
		this->radius_ = radius;
	}
	const int& ZCircle::getRadius() const
	{
		return this->radius_;
	}
}
