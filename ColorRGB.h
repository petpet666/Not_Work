#ifndef _ColorRGB_H_
#define _ColorRGB_H_
#include <iostream>

class ColorRGB
{
protected:
	short red;
	short green;
	short blue;

public:
	ColorRGB();
	~ColorRGB();
	ColorRGB (const ColorRGB& obj);
	ColorRGB& operator=(const ColorRGB& obj);
	friend bool operator== (const ColorRGB& obj1, const ColorRGB& obj2);
	//friend std::iostream operator<< (const ColorRGB& obj1, const ColorRGB& obj2);

	ColorRGB(short R, short G, short B);
	short GetR();
	short GetG();
	short GetB();
};

#endif // _ColorRGB_H_