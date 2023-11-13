
#include <iostream>
#include "Proxy.h"
int main()
{

	vector<Image> allImage;
	Proxy Helper;
	string name;
	while (true) {
		cout << "Input name of image: "; cin >> name;
		if (name == "E" || name == "e") {
			break;
		}
		Image img = Helper.DownloadImg(name);
		allImage.push_back(img);
	}
	

}
