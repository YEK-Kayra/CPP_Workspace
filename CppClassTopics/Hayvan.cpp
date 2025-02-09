#include "Hayvan.h"


Hayvan::Hayvan(string _isim) {
	Hayvan::isim = _isim;
}

Hayvan::~Hayvan() {
	cout << "Hayvan class destructor cagirildi..." << endl;
}

void Hayvan::uyu() {
	cout << Hayvan::isim << " uyuyor..." << endl;
}

void Hayvan::beslen() {
	cout << Hayvan::isim << " besleniyor..." << endl;
}

string Hayvan::getHayvanIsim() {
	return Hayvan::isim;
}

void   Hayvan::setHayvanIsim(string _ad) {
	Hayvan::isim = _ad;
}