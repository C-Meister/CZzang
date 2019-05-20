#include "ZAbstractButton.h"

namespace czzang {

	const std::string& ZAbstractButton::getText() const {
		return this->text_;
	}
	void ZAbstractButton::setText(const std::string& text) {
		this->text_ = text;
	}
	const bool& ZAbstractButton::isCheckable() const {
		return this->checkable_;
	}
	void ZAbstractButton::setCheckable(const bool& checkable) {
		this->checkable_ = checkable;
	}
	const bool& ZAbstractButton::isChecked() const {
		return this->checked_;
	}
	void ZAbstractButton::setChecked(const bool& checked) {
		this->checked_ = checked;
	}
	ZGraphics* ZAbstractButton::getGraphics() const {
		return this->graphics_;
	}
	void ZAbstractButton::setGraphics(ZGraphics* graphics) {
		this->graphics_ = graphics;
	}
	ZGraphics* ZAbstractButton::getHoverGraphics() const {
		return this->hover_graphics_;
	}
	void ZAbstractButton::setHoverGraphics(ZGraphics* hover_graphics) {
		this->hover_graphics_ = hover_graphics;
	}

}
