#pragma once
#include "ZShape.h"

namespace czzang {

	class ZEllipse : ZShape
	{
	private:
		int width_;
		int height_;
	public:
		ZEllipse();
		~ZEllipse();
	};


}