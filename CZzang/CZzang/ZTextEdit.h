#pragma once
#include <string>
#include "ZFrame.h"

typedef int ZCursorPosition;

namespace czzang {
	class ZTextEdit : public ZFrame
	{
	private:
		std::string text_;
		bool read_only_;
		ZCursorPosition cursor_position_;
	public:
		ZTextEdit();
		~ZTextEdit();

		void setText(const std::string& text);
		void setReadOnly(const bool& read_only);
		void setCursorPosition(const ZCursorPosition& cursor_position);

		const std::string& getText() const;
		const bool& getReadOnly() const;
		const ZCursorPosition& getCursorPosition() const;

		void selectAll();
	};
}

