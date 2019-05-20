#pragma once

namespace czzang {

	class ZSize
	{
	private:
		int width_;
		int height_;
	public:
		ZSize();
		~ZSize();

		void setSize(int& width, int& height);

		void setWidth(int& width);
		const int& getWidth() const;

		void setHeight(int& height);
		const int& getHeight() const;
	};


}