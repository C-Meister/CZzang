#include "ZShape.h"


namespace czzang {

	ZShape::ZShape(const std::string& id) : ZGraphics(id)
	{
		
	}
	ZShape::ZShape(const std::string& id, const ZColor& color_) : ZGraphics(id)
	{
	}
	ZShape::ZShape(const std::string& id, const ZColor& color_, const ZColor& background_color_, const ZColor& border_color_) : ZGraphics(id)
	{
	}
	ZShape::~ZShape()
	{
	}

	void ZShape::rotate()
	{
	}

	void ZShape::setColor(const ZColor& color)
	{
		this->color_ = color;
	}

	const ZColor& ZShape::getColor()
	{
		return this->color_;
	}

	void ZShape::setBackgroundColor(const ZColor& background_color)
	{
		this->background_color_ = background_color;
	}

	const ZColor& ZShape::getBackgroundColor()
	{
		return this->background_color_;
	}

	void ZShape::setBorderColor(const ZColor& border_color)
	{
		this->border_color_ = border_color;
	}

	const ZColor& ZShape::getBorderColor()
	{
		return this->border_color_;
	}

	void ZShape::setBorderWidth(const int& border_width)
	{
		this->border_width_ = border_width;
	}

	const int& ZShape::getBorderWidth()
	{
		return this->border_width_;
	}

	void ZShape::setFilled(const bool& filled)
	{
		this->filled_ = filled;
	}

	const bool& ZShape::getFilled()
	{
		return this->filled_;
	}

}
