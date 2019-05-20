#pragma once
#include "CZzang.h"
#include "ZArc.h"

namespace czzang {
	typedef unsigned char color_t;

	class ZColor
	{
		enum Color {
			RED,
			BLUE,
		};
	private:
		color_t R_;
		color_t G_;
		color_t B_;
		color_t A_ ;
	public:
		ZColor();
		ZColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A = 255);

		void setColor(const color_t& R, const color_t& G, const color_t& B);
		void setColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A);
		void setColor(std::string RGBA);



		static const ZColor Black;
		static const ZColor White;
		static const ZColor Red;
		static const ZColor Green;
		static const ZColor Blue;
		static const ZColor Yellow;
		static const ZColor Magenta;
		static const ZColor Cyan;
		static const ZColor Transparent;
	};
}