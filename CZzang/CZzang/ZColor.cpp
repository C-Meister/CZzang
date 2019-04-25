#include "ZColor.h"


namespace czzang {
	ZColor::ZColor()
	{
		this->setColor(0, 0, 0, 0);
	}

	ZColor::ZColor(int R, int G, int B, int A)
	{
		this->setColor(R, G, B, A);
	}


	ZColor::~ZColor()
	{
	}

	void ZColor::setColor(int R, int G, int B, int A)
	{
		this->R_ = R;
		this->G_ = G;
		this->B_ = B;
		this->A_ = A;
	}
	void ZColor::setColor(std::string RGBA)
	{
		
	}

	
}
