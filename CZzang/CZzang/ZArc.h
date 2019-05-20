#pragma once
#include "ZPoint.h"
#include "ZShape.h"

namespace czzang {
	class ZArc : public  ZShape
	{
	private:
		ZPoint* center_point_;
		bool clockwise_;
	public:
		ZPoint* getCenterPoint() const;
		void setCenterPoint(ZPoint* center_point);
		const bool& isClockwise() const;
		void setClockwise(const bool& clockwise);
		
	};
}

