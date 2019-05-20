#pragma once
#include "ZObject.h"
#include "ZMargin.h"

namespace czzang {

	class ZLayout : public ZObject
	{
	private:
		ZMargin* layout_margin_;
		std::vector<ZObject> * child_;

	public:
		ZMargin* getLayoutMargin() const;
		void setLayoutMargin(const ZMargin& layout_margin);
		std::vector<ZObject>* getChild() const;
		void setChild(const std::vector<ZObject>& child);
		
	};

}