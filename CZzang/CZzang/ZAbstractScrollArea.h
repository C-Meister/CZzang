#pragma once
#include <vector>
#include "ZPolicy.h"
#include "ZObject.h"
#include "ZFrame.h"
#include "ZException.h"

namespace czzang {
	class ZAbstractScrollArea : public ZFrame
	{
	private:
		ZScrollBarPolicy e_vertical_scrollbar_policy_;
		ZScrollBarPolicy  e_horizontal_scrollbar_policy_;
		ZSizeAdjustPolicy e_size_adjust_policy_;
		std::vector<ZObject>* child_list_;
	public:
		const ZScrollBarPolicy& getVerticalScrollbarPolicy() const;
		void setVerticalScrollbarPolicy(const ZScrollBarPolicy& vertical_scrollbar_policy);
		const ZScrollBarPolicy& getHorizontalScrollbarPolicy() const;
		void setHorizontalScrollbarPolicy(const ZScrollBarPolicy& horizontal_scrollbar_policy);
		const ZSizeAdjustPolicy& getSizeAdjustPolicy() const;
		void setSizeAdjustPolicy(const ZSizeAdjustPolicy& size_adjust_policy);
		std::vector<ZObject>* getChildList() const;
		void setChildList(std::vector<ZObject>* child_list);
	};

}