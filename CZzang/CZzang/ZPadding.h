#pragma once
#include "CZzang.h"

namespace czzang {

	class ZPadding
	{
	private:
		int left_;
		int right_;
		int up_;

	public:
		const int& getLeft() const;
		void setLeft(const int& left);
		const int& getRight() const;
		void setRight(const int& right);
		const int& getUp() const;
		void setUp(const int& up);
		
		
	};


}