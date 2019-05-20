#pragma once
#include "CZzang.h"

namespace czzang {
	
	
	class ZObject
	{
	private:
		std::string id_;
		bool visible_;
	public:
		const std::string& getId() const;
		void setId(const std::string& id);
		const bool& isVisible() const;
		void setVisible(const bool& visible);
		
	};
}
