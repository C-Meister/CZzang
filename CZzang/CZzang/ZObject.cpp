#include "ZObject.h"
#include <string>


namespace czzang {

	ZObject::ZObject(const std::string& id) : id_(id), visible_(true)
	{
	}

	ZObject::~ZObject()
	{

	}

	const std::string& ZObject::getId() const
	{
		return id_;
	}

	void ZObject::setVisible(const bool& visible)
	{
		this->visible_ = visible;
	}

	bool ZObject::getVisible(void)
	{
		return this->visible_;
	}


	//±×¸°´Ù
	void ZObject::paint(void)
	{

	}
}