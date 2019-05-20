#include "ZImage.h"

namespace czzang {

	const String& ZImage::getImagePath() const {
		return this->image_path_;
	}
	void ZImage::setImagePath(const String& image_path) {
		this->image_path_ = image_path;
	}
	const double& ZImage::getOpactiy() const {
		return this->opactiy_;
	}
	void ZImage::setOpactiy(const double& opactiy) {
		this->opactiy_ = opactiy;
	}

	ZImage::ZImage()
	{
	}


	ZImage::~ZImage()
	{
	}

}