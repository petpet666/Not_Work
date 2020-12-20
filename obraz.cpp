#include "obraz.h"

obraz::obraz() :
	width(0),
	height(0),
	maksimum(0),
	wielkosc(width* height)
{
	color1 = new ColorRGB[wielkosc];
}

obraz::~obraz()
{
	delete color1;
}

obraz::obraz(const obraz& obj)
{
	width = obj.width;
	height = obj.height;
	maksimum = obj.maksimum;
	wielkosc = obj.wielkosc;
	color1 = obj.color1;
}

obraz obraz::operator=(const obraz& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	return *this;
}

int obraz::GetWielkosc()
{
	return wielkosc;
}

int obraz::porownanie(const ColorRGB& obj1, const ColorRGB& obj2)
{
	int i = 0;
	//obj1.GetR();

	return i;
}
