#include "ColorRGB.h"

ColorRGB::ColorRGB():
	red(0),
	green(0),
	blue(0)
{
}

ColorRGB::~ColorRGB()
{
}

ColorRGB::ColorRGB(const ColorRGB& obj)
{
	red = obj.red;
	green = obj.green;
	blue = obj.blue;
}

ColorRGB& ColorRGB::operator=(const ColorRGB& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	return *this;
}

ColorRGB::ColorRGB(short R, short G, short B)
{
	red = R;
	green = G;
	blue = B;
}

short ColorRGB::GetR()
{
	return red;
}

short ColorRGB::GetG()
{
	return green;
}

short ColorRGB::GetB()
{
	return blue;
}

bool operator==(const ColorRGB& obj1, const ColorRGB& obj2)
{
	if (obj1.red == obj2.red)
	{
		std::cout << obj1.red << "   " << obj2.red << std::endl;
		if (obj1.green == obj2.green)
		{
			if (obj1.blue == obj2.blue)
			{
				return true;
			}
		}
	}
	return false;
}
