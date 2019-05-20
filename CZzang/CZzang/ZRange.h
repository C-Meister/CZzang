#pragma once

namespace czzang {

	class ZRange
	{
	private:
		int begin_;
		int end_;
	public:
		const int& getBegin() const;
		void setBegin(const int& begin);
		const int& getEnd() const;
		void setEnd(const int& end);

	};

}