#pragma once
#include"Image.h"
#include"vector"
class Proxy
{
private:
	vector<Image> image;
public:
	Image DownloadImg(string name);
};

