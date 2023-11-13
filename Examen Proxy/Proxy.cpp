#include "Proxy.h"


Image Proxy:: DownloadImg(string name) {
	for (Image i : this->image) {
		if (name == i.DownloadImg()) {
			cout << "Cashed img\n";
			return i;
		}
	}
	cout << "New img\n";
	this->image.push_back(name);
	return  Image(name);
}