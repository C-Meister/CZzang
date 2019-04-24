#pragma once
#include "CZzang.h"

namespace czzang {
	class ZColor
	{
	private:
		int R_;
		int G_;
		int B_;
		int A_;
	public:
		ZColor();
		ZColor(int R, int G, int B, int A);
		~ZColor();

		void setColor(int R, int G, int B, int A);
		void setColor(std::string RGBA);
	};
}