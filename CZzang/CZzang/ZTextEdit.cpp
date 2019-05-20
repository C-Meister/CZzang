#include "ZTextEdit.h"

namespace czzang {

	ZTextEdit::ZTextEdit()
	{
	}


	ZTextEdit::~ZTextEdit()
	{
	}

	void setText(const std::string& text)
	{
		this->text_ = text;
	}
	void setReadOnly(const bool& read_only)
	{
		this->read_only_ = read_only;
	}
	void setCursorPosition(const ZCursorPosition& cursor_position)
	{
		this->cursor_position_ = cursor_position;
	}

	const std::string& getText() const
	{
		return this->text_;
	}
	const bool& getReadOnly() const
	{
		return this->read_only_;
	}
	const ZCursorPosition& getCursorPosition() const
	{
		return this->cursor_position_;
	}

	void selectAll()
	{
		
	}

}
