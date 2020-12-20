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

short ColorRGB::GetR() const
{
	return red;
}

short ColorRGB::GetG() const
{
	return green;
}

short ColorRGB::GetB() const
{
	return blue;
}

bool operator==(const ColorRGB& obj1, const ColorRGB& obj2)
{
	short r1 = obj1.GetR();
	short r2 = obj2.GetR();
	short g1 = obj1.GetG();
	short g2 = obj2.GetG();
	short b1 = obj1.GetB();
	short b2 = obj2.GetB();

	if (r1 == r2)
	{
		std::cout << r1 << "   " << r2 << std::endl;
		if (g1 == g2)
		{
			if (b1 == b2)
			{
				return true;
			}
		}
	}
	return false;
}
