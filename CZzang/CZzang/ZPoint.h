#pragma once

namespace czzang {
	// x, y ��ǥ�� ��� Ŭ����
	class ZPoint
	{
	private:
		// x ��ǥ
		int x_;

		// y ��ǥ
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

