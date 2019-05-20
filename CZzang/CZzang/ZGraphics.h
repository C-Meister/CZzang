#pragma once
#include "CZzang.h"
#include "ZObject.h"
#include "ZPoint.h"


namespace czzang {
 	interface ZGraphics : public ZObject
	{
	protected:
		double angle_;
		std::vector<ZPoint> position_;

	public:
		ZGraphics(const std::string id);
		virtual void rotate(const int& angle);
	};
}

