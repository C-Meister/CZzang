#pragma once
#include "ZPoint.h"
#include "ZShape.h"

namespace czzang {
	class ZArc : ZShape
	{
	private:
		ZPoint *center_point_;
		bool clockwise;
	public:
		ZArc();
		~ZArc();

		void setCenterPoint(const ZPoint &center);
		void setClockwise(const bool &clockwise)
	};
}

