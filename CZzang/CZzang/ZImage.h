#pragma once
#include "ZGraphics.h"

namespace czzang {

	class ZImage : public ZGraphics
	{
	private:
		String image_path_;
		double opactiy_;
	public:
		const String& getImagePath() const;
		void setImagePath(const String& image_path);
		const double& getOpactiy() const;
		void setOpactiy(const double& opactiy);
		
	};


}