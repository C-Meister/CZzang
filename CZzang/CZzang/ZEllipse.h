#pragma once
#include "ZShape.h"

namespace czzang {

	class ZEllipse : public ZShape
	{
	private:
		int width_;
		int height_;
	public:
		const int& getWidth() const;
		void setWidth(const int& width);
		const int& getHeight() const;
		void setHeight(const int& height);
		
	};


}