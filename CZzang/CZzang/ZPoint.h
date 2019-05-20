#pragma once

namespace czzang {
	// x, y 좌표를 담는 클래스
	class ZPoint
	{
	private:
		int x_;
		int y_;
	public:
		const int& getX() const;
		void setX(const int& x);
		const int& getY() const;
		void setY(const int& y);
		
	};
}

