#pragma once

namespace czzang {

	enum class ZHorizontalAlignment {
		LEFT,
		CENTER,
		RIGHT
	};

	enum class ZVerticalAlignment {
		TOP,
		CENTER,
		BOTTOM
	};

	class ZAlignment
	{
	private:
		ZHorizontalAlignment horizontal_ = ZHorizontalAlignment::LEFT;
		ZVerticalAlignment vertical_ = ZVerticalAlignment::TOP;

	public:
		ZAlignment();
		~ZAlignment();


	};
}

