#pragma once

namespace czzang {
	// x, y ÁÂÇ¥¸¦ ´ã´Â Å¬·¡½º
	class ZPoint
	{
	private:
		// x ÁÂÇ¥
		int x_;

		// y ÁÂÇ¥
		int y_;

	public:
		ZPoint(){}
		ZPoint(int x, int y);
		~ZPoint(){}

		void setPos(const int& x, const int& y);
		void setX(const int& x);
		void setY(const int& y);

		const int& getX(void);
		const int& getY(void);

	};
}

