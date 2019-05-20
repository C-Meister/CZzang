#include "ZShape.h"


namespace czzang {
/*
	ZShape::ZShape(const std::string& id) : ZGraphics(id)
	{
		this->color_ = new ZColor(ZColor::Black);
		this->background_color_ = new ZColor(ZColor::Transparent);
		this->border_color_ = new ZColor(ZColor::Transparent);
		this->border_width_ = 0;
		this->filled_ = false;
	}
	ZShape::ZShape(const std::string& id, const ZColor& color_) : ZShape(id)
	{
		this->color_ = new ZColor(color);
		this->background_color_ = new ZColor(ZColor::Transparent);
		this->border_color_ = new ZColor(ZColor::Transparent);
		this->border_width_ = 0;
		this->filled_ = false;
	}*/

	ZShape::ZShape(
		const std::string& id,
		const ZColor& color = ZColor::Black,
		const ZColor& background_color = ZColor::Transparent,
		const ZColor& border_color = ZColor::Transparent,
		const int& border_width = 0,
		const bool& is_filled = true
	) : ZGraphics(id)
	{
		this->color_ = new ZColor(color);
		this->background_color_ = new ZColor(background_color);
		this->border_color_ = new ZColor(border_color);
		this->border_width_ = border_width;
		this->is_filled_ = is_filled;
	}
	ZShape::~ZShape()
	{
		delete this->color_;
		delete this->background_color_;
		delete this->border_color_;
	}

	void ZShape::rotate(const int& angle)
	{
		this->angle_ += angle;
	}

	void ZShape::setColor(const ZColor& color)
	{
		delete this->color_;
		this->color_ = new ZColor(color);
	}

	ZColor* ZShape::getColor() const
	{
		return this->color_;
	}

	void ZShape::setBackgroundColor(const ZColor& background_color)
	{
		delete this->background_color_;
		this->background_color_ = new ZColor(background_color);
	}

	ZColor* ZShape::getBackgroundColor() const
	{
		return this->background_color_;
	}

	void ZShape::setBorderColor(const ZColor& border_color) 
	{
		delete this->border_color_;
		this->border_color_ = new ZColor(border_color);
	}

	ZColor* ZShape::getBorderColor() const
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

	void ZShape::setFilled(const bool& is_filled) 
	{
		this->is_filled_ = is_filled;
	}

	const bool& ZShape::getFilled()
	{
		return this->is_filled_;
	}

}
