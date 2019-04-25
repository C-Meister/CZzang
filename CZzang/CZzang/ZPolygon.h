#pragma once
#include "ZShape.h"

namespace czzang {

	class ZPolygon : ZShape
	{
	private:
		int vertex_count_;
	public:
		ZPolygon();
		~ZPolygon();
	};


}