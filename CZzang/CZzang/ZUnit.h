#pragma once
#include "CZzang.h"
#include "ZObject.h"
#include "ZShape.h"
#include "ZImage.h"

namespace czzang {
	class ZUnit : public ZObject {
	private:
		ZShape* shape_;
		ZImage* icon_;
	public:
		ZShape* getShape() const;
		void setShape(ZShape* shape);
		ZImage* getIcon() const;
		void setIcon(ZImage* icon);
		
	};
}