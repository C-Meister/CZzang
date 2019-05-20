#pragma once
#include "CZzang.h"
#include "ZWidget.h"
#include "ZGraphics.h"

namespace czzang {

	class ZAbstractButton : public ZWidget
	{
	private:
		std::string text_;
		bool checkable_;
		bool checked_;
		ZGraphics* graphics_;
		ZGraphics* hover_graphics_;
	public:
		const std::string& getText() const;
		void setText(const std::string& text);
		const bool& isCheckable() const;
		void setCheckable(const bool& checkable);
		const bool& isChecked() const;
		void setChecked(const bool& checked);
		ZGraphics* getGraphics() const;
		void setGraphics(ZGraphics* graphics);
		ZGraphics* getHoverGraphics() const;
		void setHoverGraphics(ZGraphics* hover_graphics);
	

	};


}