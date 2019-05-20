#pragma once

namespace czzang {

	class ZMargin
	{
	private:

		int right_;
		int up_;

	public:
		const int& getRight() const;
		void setRight(const int& right);
		const int& getUp() const;
		void setUp(const int& up);
		
	};


}