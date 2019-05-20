#pragma once
#include "ZShape.h"

namespace czzang {

	class ZRect : public ZShape
	{
	private:
		int border_radius_;
	public:
		const int& getBorderRadius() const;
		void setBorderRadius(const int& border_radius);
	};

}
