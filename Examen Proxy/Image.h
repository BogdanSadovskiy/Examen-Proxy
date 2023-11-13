#pragma once
#include<iostream>
using namespace std;
class Image
{
protected:
	string img;
public:
	Image();
	Image(string name);
	void UploadImg(string img);
	string DownloadImg();

};

