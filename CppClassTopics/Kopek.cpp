#include"kopek.h"


/*Eðer private yaparsan haliyle mainde deðil burada initialize etmek zorunda olursun çünkü class dýþýna çýkamazsýn */
int Kopek::kopekSayisi = 0; // class dýþýna dediðim bu classdaki nesneler yine ulaþýrlar

Kopek::Kopek(string isim) : Hayvan(isim) {
	kopekSayisi++;
	
}

Kopek::~Kopek() {
	kopekSayisi--;
}

void Kopek::havla() {
	cout << Kopek::getHayvanIsim() << " isimli kopek havliyor..." << endl;
}

int Kopek::getKopekSayisi() {
	return Kopek::kopekSayisi;
}