#include "ZRange.h"

namespace czzang {

	const int& ZRange::getBegin() const {
		return this->begin_;
	}
	void ZRange::setBegin(const int& begin) {
		this->begin_ = begin;
	}
	const int& ZRange::getEnd() const {
		return this->end_;
	}
	void ZRange::setEnd(const int& end) {
		this->end_ = end;
	}
	ZRange::ZRange()
	{
	}


	ZRange::~ZRange()
	{
	}

}
