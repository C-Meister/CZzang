#include "ZSize.h"


namespace czzang {

	ZSize::ZSize()
	{
		this->width_ = 0;
		this->height_ = 0;
	}


	ZSize::~ZSize()
	{
	}

	void ZSize::setSize(int& width, int& height)
	{
		this->width_ = width;
		this->height_ = height;
	}

	void ZSize::setWidth(int& width)
	{
		this->width_ = width;
	}

	const int& ZSize::getWidth() const
	{
		return this->width_;
	}

	void ZSize::setHeight(int& height)
	{
		this->height_ = height;
	}

	const int& ZSize::getHeight() const
	{
		return this->height_;
	}

}