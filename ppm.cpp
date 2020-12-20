#include <fstream>
#include <sstream>
#include "ppm.h"


ppm::ppm() :obraz(),
	r_kod("")
{

}

ppm::ppm(const char* name) : obraz()
{
	int k = 1;
	int l = 0;
	long ij = 0;
	short h = 5;
	short r = 0;
	short g = 0;
	short b = 0;

	std::string rgb;
	std::string number;

	std::fstream plik;

	std::stringstream strumien1;

	plik.open(name, std::ios::in);

	if (plik.good() == true)
	{

		while (k == 1)
		{
			std::getline(plik, rgb);
			std::stringstream strumien(rgb);

			while (k == 1)
			{
				if (rgb[0] == '#')
				{
					break;
				}
				if (l == 0)
				{
					r_kod = rgb;
					l++;
					break;
				}
				if (l == 1)
				{
					strumien >> obraz::width;
					strumien >> obraz::height;
					l++;
					break;
				}
				if (l == 2)
				{
					strumien >> obraz::maksimum;
					k = 0;
					break;
				}
			}
		}
		obraz::wielkosc = obraz::width * obraz::height;
		//std::cout << obraz::wielkosc << std::endl;
		
		color1 = new ColorRGB[wielkosc];

		//for (int i = 0; i < obraz::wielkosc; i = i)
		for (int i = 0; i < 20; i = i)
		{
			std::getline(plik, rgb);
			std::stringstream strumien(rgb);

			for (size_t j = 0; j < rgb.length(); j++)
			{
				if (rgb[j] == '#')
				{
					i = i - h;
					break;
				}

				strumien >> r;
				strumien1 << r;
				number = strumien1.str();
				j++;
				std::cout << rgb << " " << number.length() << std::endl;

				strumien >> g;
				strumien1 << g;
				number = strumien1.str();
				j++;

				strumien >> b;
				strumien1 << b;
				number = strumien1.str();
				j++;

				j = j + number.length() - k;
				k = number.length();

				color1[ij] = ColorRGB(r, g, b);
				std::cout << r << g << b << std::endl;
				ij++;
				h--;
				i++;
			}
			h = 5;
		}

		plik.close();
	}

}

ppm::~ppm()
{

}

ppm::ppm(const ppm& obj):obraz()
{
	r_kod = obj.r_kod;
}

ppm ppm::operator=(const ppm& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	return *this;
}

int ppm::LiczColor(obraz& obj)
{
	int k = 0;
	int ilosc = 1;

	for (int i = 0; i < wielkosc; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (!(obj.color1[j] == obj.color1[i]))
			{
				k++;
			}
		}
		if (k == i)
		{
			ilosc++;
		}
	}

	return ilosc;
}
