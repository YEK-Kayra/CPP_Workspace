//#include <iostream>
//using namespace std;
//
//// Base class
//class Hayvan {
//
//public:
//	virtual void sesCikar() {
//		cout << "Hayvan sesCikar fonksiyonu cagirildi\n";
//	}
//
//	void beslen() {
//		cout << "Hayvan sinifinin beslen metodu cagirildi\n";
//	}
//
//};
//
//
//
//// Child class : Kedi
//class Kedi : public Hayvan {
//
//public:
//	void sesCikar() {
//		cout << "miyav miyav..\n";
//	}
//
//	void beslen() {
//		cout << "Kedi sutle besleniyor\n";
//	}
//
//};
//
//
//
//// Child class : Kus
//class Kus : public Hayvan {
//
//public:
//	void sesCikar() {
//		cout << "cik cik cik..\n";
//	}
//
//	void beslen() {
//		cout << "Kus yemle besleniyor..\n";
//	}
//
//};
//
//
//int main()
//{
//	Hayvan* pHayvan;
//	Kus boncuk;
//	Kedi kontes;
//
//	cout << "1:\n";
//	kontes.beslen();		//Kedi s�tle besleniyor
//	kontes.sesCikar();		//miyav miyav..
//
//	cout << "2:\n";
//	pHayvan = &boncuk;		//�okbi�imlilik olcak, polimorfizm
//	pHayvan->beslen();		//Hayvan s�n�f�n�n beslen metodu �a��r�ld�
//	pHayvan->sesCikar();	//Virrtual oldu�u i�in cik cik... ifadesi yazacak
//}
