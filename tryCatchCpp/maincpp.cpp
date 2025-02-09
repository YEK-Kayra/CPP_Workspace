#include <iostream>

using namespace std; 


int main() {

	int bolen, bolunen, sonuc;


	cout << "Lutfen bolunen sayiyi girin : ";
	cin >> bolunen;
	cout << "Lutfen bolen sayiyi girin : ";
	cin >> bolen;

	// Burada 0 de�erini girersen bolen i�in program�n ��kecektir(Runtime error)
	// Bu y�zden Try Catch kullanmal� ��nk� bir s�r� i�lem yapt� veri taban�ndan o kadar veri �ekti hesap kitap
	//  taki biri 0 girmi� bile ya da yanl��l�kla, haliyle program�n ��kmesi verilerin, zaman�nda �nemli �l��de kayb�na 
	//	yol a�acakt�r, Bu y�zden Try Catch yazmam�z laz�m 
			
			
			//sonuc = bolunen / bolen;
			//cout << sonuc << endl;
	try {
		
		if (bolen == 0) {
			
			throw 99;
		}
		//E�er throw ile exception atamas� yapmad�ysa buradan devam edecektir(throw yap�nca bir daha a�a�� okumaz)
		sonuc = bolunen / bolen;
		cout << sonuc << endl;
	}

	catch (int hatakodu) {
		cout << "Bolen sayi 0 olamaz" << endl << hatakodu << endl;
	}

	cout << "Program sonu ve .exe basarili bir sekilde yurutuldu";
}