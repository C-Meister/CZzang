#pragma once
#include "ZObject.h"
#include "ZFont.h"
#include "ZToolTip.h"
#include "ZCursor.h"
#include "ZGeometry.h"

namespace czzang {

	class ZWidget :public ZObject
	{
	private:
		ZFont* font_;
		ZCursor* cursor_;
		int focus_policy_;
		ZToolTip* tooltip_;
		ZGeometry* geometry_;
	public:
		ZFont* getFont() const;
		void setFont(ZFont* font);
		ZCursor* getCursor() const;
		void setCursor(ZCursor* cursor);
		const int& getFocusPolicy() const;
		void setFocusPolicy(const int& focus_policy);
		ZToolTip* getTooltip() const;
		void setTooltip(ZToolTip* tooltip);
		ZGeometry* getGeometry() const;
		void setGeometry(ZGeometry* geometry);
	
	};
}