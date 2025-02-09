#include"Kedi.h"


Kedi::Kedi(string ad) : Hayvan(ad) { //Kediyi oluþtururkenki parametreyi üst sýnýfa parametre olarak gönderdim

	// constructor sýnýfý için yapmak istediklerini buraya yazabilirsin
}

Kedi::~Kedi() {
	cout << "Kedi class destructor cagirildi..." << endl;
}

void Kedi::fareYakala() {
	cout << Hayvan::getHayvanIsim() << " fareyi yakalamaya calisiyor..." << endl;
}