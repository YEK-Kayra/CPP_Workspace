#include"Kedi.h"


Kedi::Kedi(string ad) : Hayvan(ad) { //Kediyi olu�tururkenki parametreyi �st s�n�fa parametre olarak g�nderdim

	// constructor s�n�f� i�in yapmak istediklerini buraya yazabilirsin
}

Kedi::~Kedi() {
	cout << "Kedi class destructor cagirildi..." << endl;
}

void Kedi::fareYakala() {
	cout << Hayvan::getHayvanIsim() << " fareyi yakalamaya calisiyor..." << endl;
}