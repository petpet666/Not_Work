#ifndef _obraz_H_
#define _obraz_H_
#include "ColorRGB.h"

class obraz
{
protected:
	long width;
	long height;
	long maksimum;
	long wielkosc;
	//ColorRGB* color1;

public:
	ColorRGB* color1;

	obraz();
	virtual ~obraz();
	obraz(const obraz &obj);
	obraz operator=(const obraz &obj);

	int GetWielkosc();

	int porownanie(const ColorRGB& obj1, const ColorRGB& obj2);

};

#endif // _obraz_H_