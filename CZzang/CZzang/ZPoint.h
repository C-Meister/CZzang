#pragma once

namespace czzang {
	// x, y ��ǥ�� ��� Ŭ����
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

