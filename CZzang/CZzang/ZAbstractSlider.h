#pragma once
#include "ZGraphics.h"
#include "ZFlow.h"
#include "ZWidget.h"
#include "ZAlignment.h"


namespace czzang {

	class ZAbstractSlider : public ZWidget
	{
	private:
		int minimum_;
		int maximum_;
		int value_;
		ZAlignment* orientation_;
		int single_step_;
		int page_step_;
		ZGraphics* box_;
		ZGraphics* bar_;
		ZFlow e_flow_;
	public:
		const int& getMinimum() const;
		void setMinimum(const int& minimum);
		const int& getMaximum() const;
		void setMaximum(const int& maximum);
		const int& getValue() const;
		void setValue(const int& value);
		ZAlignment* getOrientation() const;
		void setOrientation(const ZAlignment& orientation);
		const int& getSingleStep() const;
		void setSingleStep(const int& single_step);
		const int& getPageStep() const;
		void setPageStep(const int& page_step);
		ZGraphics* getBox() const;
		void setBox(const ZGraphics& box);
		ZGraphics* getBar() const;
		void setBar(const ZGraphics& bar);
		const ZFlow& getFlow() const;
		void setFlow(const ZFlow& flow);

	};


}