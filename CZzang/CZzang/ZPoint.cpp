#include "ZPoint.h"

namespace czzang {
	ZPoint::ZPoint(int x, int y) : x_(x), y_(y){

	}
	
	void ZPoint::setPos(const int& x, const int& y)
	{
		this->x_ = x;
		this->y_ = y;
	}
	void ZPoint::setX(const int& x)
	{
		this->x_ = x;
	}
	void ZPoint::setY(const int& y)
	{
		this->y_ = y;
	}
	const int& ZPoint::getX(void)
	{
		return this->x_;
	}
	const int& ZPoint::getY(void)
	{
		return this->y_;
	}
}


