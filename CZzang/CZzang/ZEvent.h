#pragma once

namespace czzang {

	class ZEvent
	{
	private:
		String event_name_;

	public:
		const String& getEventName() const;
		void setEventName(const String& event_name);

	};


}