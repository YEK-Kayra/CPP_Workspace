#pragma once

#include"Hayvan.h"
#include<iostream>

class Kopek : public Hayvan { //Kopek class �n�n Hayvan class�n�n alt bir class � oldu�unu g�sterdik

public:

	//Kopek constructor
	Kopek(string isim);
	//kopek destructor
	~Kopek();

	//class i�inde de static method tan�mlay�p kullanabiliyoruz
		//static int getKopekSayisi() {
		//	return kopekSayisi;
		//}
	static int getKopekSayisi();

	void havla();

private:

	static int kopekSayisi;

};