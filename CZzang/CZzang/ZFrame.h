#pragma once
#include "ZWidget.h"
#include "ZShape.h"

namespace czzang {

	class ZFrame :public ZWidget
	{
	private:
		int frame_shape_;
		int frame_shadow_;
		int line_width_;
		ZShape* shape_;
	public:
		ZFrame();
		~ZFrame();

		void setFrameShape(const int& frame_shape);
		const int& getFrameShape() const;

		void setFrameShadow(const int& frame_shadow);
		const int& getFrameShadow() const;

		void setLineWidth(const int& line_width);
		const int& getFrameShadow() const;

		void setShape(const ZShape& shape);
		ZShape* getShape() const;
	};

}
