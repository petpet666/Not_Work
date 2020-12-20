#ifndef _ppm_H_
#define _ppm_H_
//#include "obraz.h"

class ppm :public obraz
{
protected:
	std::string r_kod; //rodzaj kodowania
public:
	ppm();
	ppm(const char* name);
	~ppm();
	ppm(const ppm &obj);
	ppm operator=(const ppm &obj);

	int LiczColor(obraz& obj);
};

#endif // _ppm_H_