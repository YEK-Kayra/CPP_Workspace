#pragma once

#include"Hayvan.h"
#include<iostream>

class Kopek : public Hayvan { //Kopek class ýnýn Hayvan classýnýn alt bir class ý olduðunu gösterdik

public:

	//Kopek constructor
	Kopek(string isim);
	//kopek destructor
	~Kopek();

	//class içinde de static method tanýmlayýp kullanabiliyoruz
		//static int getKopekSayisi() {
		//	return kopekSayisi;
		//}
	static int getKopekSayisi();

	void havla();

private:

	static int kopekSayisi;

};