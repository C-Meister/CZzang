#include "ZObject.h"
#include <string>


namespace czzang {

	const std::string& ZObject::getId() const {
		return this->id_;
	}
	void ZObject::setId(const std::string& id) {
		this->id_ = id;
	}
	const bool& ZObject::isVisible() const {
		return this->visible_;
	}
	void ZObject::setVisible(const bool& visible) {
		this->visible_ = visible;
	}
}