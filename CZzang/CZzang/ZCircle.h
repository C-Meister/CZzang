#pragma once
#include "ZShape.h"

namespace czzang {

	class ZCircle : public ZShape
	{
	private:
		int radius_;
	public:

		void setRadius(const int& radius);
		const int& getRadius() const;
	};


}