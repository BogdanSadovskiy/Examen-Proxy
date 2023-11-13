#include "Image.h"

Image::Image(){}
Image:: Image(string name) {
	this->img = name;
}
void Image::UploadImg(string img) {

}
string Image::DownloadImg() {
	return this->img;
}