#pragma once
#include "ZGraphics.h"
#include "ZColor.h"

namespace czzang {


	class ZShape : public ZGraphics
	{
	private:
		ZColor	color_;
		ZColor	background_color_;
		ZColor	border_color_;
		int		border_width_;
		bool	filled_;

	public:
		ZShape(const std::string& id);
		ZShape(const std::string& id, const ZColor& color_);
		ZShape(const std::string& id, const ZColor& color_,const ZColor& background_color_, const ZColor& border_color_);


		~ZShape();
		void rotate () override;

		void setColor(const ZColor& color);
		const ZColor& getColor();

		void setBackgroundColor(const ZColor& background_color);
		const ZColor& getBackgroundColor();
	
		void setBorderColor(const ZColor& border_color);
		const ZColor& getBorderColor();

		void setBorderWidth(const int& border_width);
		const int& getBorderWidth();

		void setFilled(const bool& filled);
		const bool& getFilled();
	};

}


