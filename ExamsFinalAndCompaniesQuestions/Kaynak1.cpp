#include<iostream>

using namespace std;

// Base class
class Hayvan {

public:
	virtual void sesCikar() {	//Virtual �n ad� ile polimorfizmi uygulars�n
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
	//cunku nesne kus class�ndan t�retilse bile tutan bir hayvan pointer �
	h->sesCikar();	//cik cik cik
	h->beslen();	//Hayvan sinifinin beslen metodu cagirildi
	h->sesCikar();	//cik cik cik
}


int main()
{
	Kus* pnazli;			//Kus class �ndan t�retilecek nesneler i�in pointer
	pnazli = new Kus;		//Kus i�in dynmic memory allocation ile yer ay�r�r bir nesne i�in yeterli alan reserved edilir
	
	birseylerYap(pnazli);	//Hayvan tipinde pointer bekliyor fakat biz ku� tipinde bir pointer g�nderebiliriz polimorfizim �zellikleri kullanarak
}
