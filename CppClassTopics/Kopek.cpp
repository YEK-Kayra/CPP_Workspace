#include"kopek.h"


/*E�er private yaparsan haliyle mainde de�il burada initialize etmek zorunda olursun ��nk� class d���na ��kamazs�n */
int Kopek::kopekSayisi = 0; // class d���na dedi�im bu classdaki nesneler yine ula��rlar

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