#include "ZPolygon.h"


namespace czzang {
	const int& ZPolygon::getVertexCount() const {
		return this->vertex_count_;
	}
	void ZPolygon::setVertexCount(const int& vertex_count) {
		this->vertex_count_ = vertex_count;
	}

}
