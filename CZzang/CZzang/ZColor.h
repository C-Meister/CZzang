#pragma once
#include "CZzang.h"


namespace czzang {
	typedef unsigned char color_t;

	class ZColor
	{
	private:
		color_t R_ = 0;
		color_t G_ = 0;
		color_t B_ = 0;
		color_t A_ = 0;
	public:
		ZColor();
		ZColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A);
		~ZColor();

		void setColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A);
		void setColor(std::string RGBA);


	};
}