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
	}

	const ZColor& ZShape::getBorderColor()
	{
		// TODO: 여기에 반환 구문을 삽입합니다.
	}

	void ZShape::setBorderWidth(const int& border_width)
	{
	}

	const int& ZShape::getBorderWidth()
	{
		// TODO: 여기에 반환 구문을 삽입합니다.
	}

	void ZShape::setFilled(const bool& filled)
	{
	}

	const bool& ZShape::getFilled()
	{
		// TODO: 여기에 반환 구문을 삽입합니다.
	}

}
