#pragma once
#include"Hayvan.h"	// Kedi sýnýfý Hayvan sýnýfýnýn alt bir sýnýfýdýr. Eriþebilbilmek için include edildi

class Kedi : public Hayvan {		// C++ de Alt sýnýf oluþturmanýn yöntemi, Hayvan kedi sýnýfýný kapsar
									// Inheritance baðý tam da burada oluþturulur, Hayvandan kediye doðru

public:
	
	//Kedi constructor 
	Kedi(string ad);
	//Kedi destructor
	~Kedi();

	//Sadece kedi sýnýfýna ait olan bir metoddur, hayvanlar sýnýfýnda olmasý gereksizdiz 
	void fareYakala();


};