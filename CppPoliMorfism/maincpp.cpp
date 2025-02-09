#include <iostream>

using namespace std;

/*Main Class*/
class Hayvan {

public:

	virtual void sesCikar() {
		cout << "Virtual function icerisine girdi" << endl;
	}

	void yazdir() {
		cout << "Hayvan class'inin yazdir metoduna geldi" << endl;
	}


};

/*Child Class*/
class Kedi : public Hayvan {
public:
	void sesCikar() {							//Virtual method will be implemented according to our Kedi class
		cout << "Miyavv miyavv..." << endl;
	}

	void yazdir() {
		cout << "Kedi class'i yazdir metodu cagirildi" << endl;
	}

};


/*Child Class*/
class Kopek : public Hayvan {
public:
	void sesCikar() {							//Virtual method will be implemented according to our Kedi class
		cout << "Havv Hav..." << endl;
	}

	void yazdir() {
		cout << "Kopek class'i yazdir metodu cagirildi" << endl;
	}

};


/*! Polimorfizim olmasaydý o zaman function overwrite olurdu týpký aþaðýdaki gibi*/
//void ucKezSesCikar(Kedi *pKedi) {
//	cout << "Miyav ";
//	cout << "Miyav ";
//	cout << "Miyav ";
//}
//
//void ucKezSesCikar(Kopek* pKopek) {
//	cout << "Hav ";
//	cout << "Hav ";
//	cout << "Hav ";
//}


/*Ýçine kedi gönderirlerse kedi sesi çýka, içine köpek gönderirlerse köpek sesi çýkar*/
void ucKezSesCikar(Hayvan* pHayvan) {
	pHayvan->sesCikar();
	pHayvan->sesCikar();
	pHayvan->sesCikar();
}



int main() {

	
/*
	Kedi british;
	Kopek golden;

	ucKezSesCikar(&british);
	ucKezSesCikar(&golden);

	//Hayvan* pHayvan;
	//pHayvan = &british; //british nesnesinin adresini tutuyor
	//pHayvan->sesCikar(); // Vereceði yanýt miyav miyav, virtual özellikten dolayý
	//pHayvan->yazdir();   // Kedi nesnesini tutmasýna raðmen ana classdaki yazdir metodunu cagirir
	// 
	//cout << endl;
	
	//pHayvan = &golden;
	//pHayvan->sesCikar();
	//pHayvan->yazdir();
*/




	return 0;

}