#include<iostream>

using namespace std;

// Base class
class Hayvan {

public:
	virtual void sesCikar() {	//Virtual ön adý ile polimorfizmi uygularsýn
		cout << "Hayvan sesCikar fonksiyonu cagirildi\n";
	}

	void beslen() {
		cout << "Hayvan sinifinin beslen metodu cagirildi\n";
	}

};


// Child class : Kus
class Kus : public Hayvan {

public:
	void sesCikar() {
		cout << "cik cik cik..\n";
	}

	void beslen() {
		cout << "Kus yemle besleniyor..\n";
	}

};


void birseylerYap(Hayvan* h) {
	//cunku nesne kus classýndan türetilse bile tutan bir hayvan pointer ý
	h->sesCikar();	//cik cik cik
	h->beslen();	//Hayvan sinifinin beslen metodu cagirildi
	h->sesCikar();	//cik cik cik
}


int main()
{
	Kus* pnazli;			//Kus class ýndan türetilecek nesneler için pointer
	pnazli = new Kus;		//Kus için dynmic memory allocation ile yer ayýrýr bir nesne için yeterli alan reserved edilir
	
	birseylerYap(pnazli);	//Hayvan tipinde pointer bekliyor fakat biz kuþ tipinde bir pointer gönderebiliriz polimorfizim özellikleri kullanarak
}
