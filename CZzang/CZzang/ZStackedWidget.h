#pragma once

namespace czzang {

	class ZStackedWidget
	{
	private:
		int current_index_;
	public:
		const int& getCurrentIndex() const;
		void setCurrentIndex(const int& current_index);
		
	};


}