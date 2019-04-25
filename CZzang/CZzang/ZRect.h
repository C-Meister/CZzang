#pragma once
#include "ZShape.h"

namespace czzang {

	class ZRect : ZShape
	{
	private:
		int border_radius_;
	public:
		ZRect();
		~ZRect();
	};

}
