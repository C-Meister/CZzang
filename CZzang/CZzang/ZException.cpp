#include "ZException.h"

namespace czzang {
	ZException::ZException(const char* message)
	{
		this->msg_ = message;
	}
	ZException::ZException(const std::string& message)
	{
		this->msg_ = message;
	}
	ZException::~ZException() throw()
	{

	}
	const char* ZException::what() const throw()
	{
		return this->msg_.c_str();
	}
}
