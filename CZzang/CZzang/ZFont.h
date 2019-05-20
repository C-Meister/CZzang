#pragma once
#include "CZzang.h"

namespace czzang {

	class ZFont
	{
	private:
		std::string family_;
		int point_size_;
		bool italic_;
		bool bold_;
		bool underline_;
		bool strikeout_;
		bool kerning_;
		bool antialiasing_;
	public:
		const std::string& getFamily() const;
		void setFamily(const std::string& family);
		const int& getPointSize() const;
		void setPointSize(const int& point_size);
		const bool& isItalic() const;
		void setItalic(const bool& italic);
		const bool& isBold() const;
		void setBold(const bool& bold);
		const bool& isUnderline() const;
		void setUnderline(const bool& underline);
		const bool& isStrikeout() const;
		void setStrikeout(const bool& strikeout);
		const bool& isKerning() const;
		void setKerning(const bool& kerning_);
		const bool& isAntialiasing() const;
		void setAntialiasing(const bool& antialiasing);
	
	};


}