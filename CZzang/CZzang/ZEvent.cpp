#include "ZEvent.h"

namespace czzang {

	const String& ZEvent::getEventName() const {
		return this->event_name_;
	}
	void ZEvent::setEventName(const String& event_name) {
		this->event_name_ = event_name;
	}

	ZEvent::ZEvent()
	{
	}


	ZEvent::~ZEvent()
	{
	}

}
