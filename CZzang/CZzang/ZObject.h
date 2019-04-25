#pragma once
#include <string>


namespace czzang {
	
	
	class ZObject
	{
	private:
		const std::string	id_;
		bool				visible_;
	public:
		ZObject(const std::string& id);
		~ZObject();
		
		const std::string& getId() const;
		
		void setVisible(const bool& visible);
		bool getVisible(void);

		void paint(void);
	};
}
