#include <iostream>
#include "ppm.h"

int liczkolory(obraz &obj);

int main()
{
	obraz *obraz1;
	obraz1 = new ppm("lena.ppm");

	int kolor;

	kolor = liczkolory(*obraz1);

	std::cout << "Liczba unikalnych kolorow w obrazie ";
	std::cout << kolor;

	delete obraz1;
	
	return 0;
}


int liczkolory(obraz &obj)
{
	int k = 0;
	long ilosc = 0;
	int wielkosc = obj.GetWielkosc();

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
		k = 0;
	}

	return ilosc;
}