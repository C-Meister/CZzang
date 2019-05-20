#include "ZColor.h"


namespace czzang {
	ZColor::ZColor(): R_(0), G_(0), B_(0), A_(255)
	{
	}
	ZColor::ZColor(const color_t& R, const color_t& G, const color_t& B, const color_t& A = 255): R_(R), G_(G), B_(B), A_(A)
	{
	}

	void ZColor::setColor(const color_t& R, const color_t& G, const color_t& B)
	{
		this->R_ = R;
		this->G_ = G;
		this->B_ = B;
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

	const ZColor ZColor::Black(0, 0, 0);
	const ZColor ZColor::White(255, 255, 255);
	const ZColor ZColor::Red(255, 0, 0);
	const ZColor ZColor::Green(0, 255, 0);
	const ZColor ZColor::Blue(0, 0, 255);
	const ZColor ZColor::Yellow(255, 255, 0);
	const ZColor ZColor::Magenta(255, 0, 255);
	const ZColor ZColor::Cyan(0, 255, 255);
	const ZColor ZColor::Transparent(0, 0, 0, 0);
	
}
