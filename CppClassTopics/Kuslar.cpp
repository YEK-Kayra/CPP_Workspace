#include"Kuslar.h"

Kus::Kus(string isim) : Hayvan(isim) {

}

void Kus::_ucur() {
	//cout << Kus::getHayvanIsim() << " isimli kus ucuyor" << endl;
	cout << Kus::isim << " isimli kus ucuyor" << endl;
}