#pragma once
#include "CZzang.h"
#include "ZObject.h"
#include "ZPoint.h"


namespace czzang {
 	interface ZGraphics : public ZObject
	{
	private:

		double angle_;

	protected:

		std::vector<ZPoint> position_;

	public:
		ZGraphics(const std::string& id) : ZObject(id) {}

		virtual void rotate() = 0;
	};
}

