#pragma once
#include "ZGraphics.h"
#include "ZColor.h"

namespace czzang {


	class ZShape : public ZGraphics
	{
	private:
		ZColor	*color_;
		ZColor	*background_color_;
		ZColor	*border_color_;
		int		border_width_;
		bool	is_filled_;

	public:
		ZShape(
			const std::string& id,
			const ZColor& color,
			const ZColor& background_color,
			const ZColor& border_color,
			const int& border_width,
			const bool& is_filled
		);


		~ZShape();
		void rotate (const int& angle) override;

		void setColor(const ZColor& color);
		ZColor* getColor() const;

		void setBackgroundColor(const ZColor& background_color);
		ZColor* getBackgroundColor() const;
	
		void setBorderColor(const ZColor& border_color);
		ZColor* getBorderColor() const;

		void setBorderWidth(const int& border_width);
		const int& getBorderWidth();

		void setFilled(const bool& is_filled);
		const bool& getFilled();
	};

}


