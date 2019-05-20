#include "ZFont.h"

namespace czzang {

	const std::string& ZFont::getFamily() const {
		return this->family_;
	}
	void ZFont::setFamily(const std::string& family) {
		this->family_ = family;
	}
	const int& ZFont::getPointSize() const {
		return this->point_size_;
	}
	void ZFont::setPointSize(const int& point_size) {
		this->point_size_ = point_size;
	}
	const bool& ZFont::isItalic() const {
		return this->italic_;
	}
	void ZFont::setItalic(const bool& italic) {
		this->italic_ = italic;
	}
	const bool& ZFont::isBold() const {
		return this->bold_;
	}
	void ZFont::setBold(const bool& bold) {
		this->bold_ = bold;
	}
	const bool& ZFont::isUnderline() const {
		return this->underline_;
	}
	void ZFont::setUnderline(const bool& underline) {
		this->underline_ = underline;
	}
	const bool& ZFont::isStrikeout() const {
		return this->strikeout_;
	}
	void ZFont::setStrikeout(const bool& strikeout) {
		this->strikeout_ = strikeout;
	}
	const bool& ZFont::isKerning() const {
		return this->kerning_;
	}
	void ZFont::setKerning(const bool& kerning_) {
		this->kerning_ = kerning_;
	}
	const bool& ZFont::isAntialiasing() const {
		return this->antialiasing_;
	}
	void ZFont::setAntialiasing(const bool& antialiasing) {
		this->antialiasing_ = antialiasing;
	}

}
