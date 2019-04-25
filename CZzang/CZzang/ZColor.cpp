#include "ZColor.h"


namespace czzang {
	ZColor::ZColor()
	{
		this->setColor(0, 0, 0, 0);
	}

	ZColor::ZColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A)
	{
		this->setColor(R, G, B, A);
	}


	ZColor::~ZColor()
	{
	}

	void ZColor::setColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A)
	{
		this->R_ = R;
		this->G_ = G;
		this->B_ = B;
		this->A_ = A;
	}
	void ZColor::setColor(std::string RGBA)
	{
		if (RGBA.at(0) == '#')
			RGBA = RGBA.erase(0, 1);

		int num = std::stoi(RGBA, 0, 16);

	}

	
}
