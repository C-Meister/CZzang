#pragma once
#include <string>
#include "ZFrame.h"
#include "ZAlignment.h"
#include "ZPadding.h"

namespace czzang {

	class ZTextView : public ZFrame
	{
	private:
		std::string text_;
		ZAlignment alignment_;
		bool word_wrap;
		ZPadding padding_;
		int indent_;
	public:
		ZTextView();
		~ZTextView();

		void setText(const& std::string text);
		void setAlignment(const ZAlignment& alignment);
		void setWordWrap(const bool& word_wrap);
		void setPadding(const ZPadding& padding);
		void setIndent(const int& indent);

		const std::string& getText() const;
		const ZAlignment& getAlignment() const;
		const bool& getWordWrap() const;
		const ZPadding& getPadding() const;
		const int& getIndent() const;

	};


}