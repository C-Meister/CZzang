#pragma once
#include "ZShape.h"

namespace czzang {

	class ZPolygon : ZShape
	{
	private:
		int vertex_count_;
	public:
		const int& getVertexCount() const;
		void setVertexCount(const int& vertex_count);
		
	};


}