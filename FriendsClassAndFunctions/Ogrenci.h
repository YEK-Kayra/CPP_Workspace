#pragma once

#include <iostream>
using namespace std;

class Ogrenci {
private :
	int not1;
	int not2;
	string Isim;

public:
	//Constructor
	Ogrenci(string _Isim, int _not1, int _not2); 

	//Friend class ý buraya eklersek  artýk private olanlarý da ilgili classa set&get kullanmadan gönderebiliriz.
	friend class Hesaplayici;

};