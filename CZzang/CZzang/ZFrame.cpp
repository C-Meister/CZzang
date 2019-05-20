#include "ZFrame.h"

namespace czzang {


	ZFrame::ZFrame()
	{
	}


	ZFrame::~ZFrame()
	{
	}

	void ZFrame::setFrameShape(const int& frame_shape)
	{
		this->frame_shape_ = frame_shape;
	}

	const int& ZFrame::getFrameShape() const
	{
		return this->frame_shape_;
	}

	void ZFrame::setFrameShadow(const int& frame_shadow)
	{
		this->frame_shadow_ = frame_shadow;
	}

	void ZFrame::setLineWidth(const int& line_width)
	{
		this->line_width_ = line_width;
	}

	const int& ZFrame::getFrameShadow() const
	{
		return this->frame_shadow_;
	}

	void ZFrame::setShape(const ZShape& shape)
	{
		this->shape_ = new ZShape(shape);
	}

	ZShape* ZFrame::getShape() const
	{
		return this->shape_;
	}

}