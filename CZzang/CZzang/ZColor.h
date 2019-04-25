#pragma once
#include "CZzang.h"

namespace czzang {
	class ZColor
	{
	private:
		int R_ = 0;
		int G_ = 0;
		int B_ = 0;
		int A_ = 0;
	public:
		ZColor();
		ZColor(int R, int G, int B, int A);
		~ZColor();

		void setColor(int R, int G, int B, int A);
		void setColor(std::string RGBA);
	};
}