#include "ZTextView.h"

namespace czzang {


	ZTextView::ZTextView()
	{
	}


	ZTextView::~ZTextView()
	{
	}

	void ZTextView::setText(const& std::string text)
	{
		this->text_ = text;
	}
	void ZTextView::setAlignment(const ZAlignment& alignment)
	{
		this->alignment_ = alignment;
	}
	void ZTextView::setWordWrap(const bool& word_wrap)
	{
		this->word_wrap_ = word_wrap;
	}
	void ZTextView::setPadding(const ZPadding& padding)
	{
		this->padding_ = padding;
	}
	void ZTextView::setIndent(const int& indent)
	{
		this->indent_ = indent;
	}

	const std::string& ZTextView::getText() const
	{
		return this->text_;
	}
	const ZAlignment& ZTextView::getAlignment() const
	{
		return this->alignment_;
	}
	const bool& ZTextView::getWordWrap() const
	{
		return this->word_wrap_;
	}
	const ZPadding& ZTextView::getPadding() const
	{
		return this->padding_;
	}
	const int& ZTextView::getIndent() const
	{
		return this->indent_;
	}

}