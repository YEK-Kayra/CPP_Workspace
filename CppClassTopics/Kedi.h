#pragma once
#include"Hayvan.h"	// Kedi s�n�f� Hayvan s�n�f�n�n alt bir s�n�f�d�r. Eri�ebilbilmek i�in include edildi

class Kedi : public Hayvan {		// C++ de Alt s�n�f olu�turman�n y�ntemi, Hayvan kedi s�n�f�n� kapsar
									// Inheritance ba�� tam da burada olu�turulur, Hayvandan kediye do�ru

public:
	
	//Kedi constructor 
	Kedi(string ad);
	//Kedi destructor
	~Kedi();

	//Sadece kedi s�n�f�na ait olan bir metoddur, hayvanlar s�n�f�nda olmas� gereksizdiz 
	void fareYakala();


};