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
//	kontes.beslen();		//Kedi sütle besleniyor
//	kontes.sesCikar();		//miyav miyav..
//
//	cout << "2:\n";
//	pHayvan = &boncuk;		//Çokbiçimlilik olcak, polimorfizm
//	pHayvan->beslen();		//Hayvan sýnýfýnýn beslen metodu çaðýrýldý
//	pHayvan->sesCikar();	//Virrtual olduðu için cik cik... ifadesi yazacak
//}
