#include <iostream>

using namespace std; 


int main() {

	int bolen, bolunen, sonuc;


	cout << "Lutfen bolunen sayiyi girin : ";
	cin >> bolunen;
	cout << "Lutfen bolen sayiyi girin : ";
	cin >> bolen;

	// Burada 0 deðerini girersen bolen için programýn çökecektir(Runtime error)
	// Bu yüzden Try Catch kullanmalý çünkü bir sürü iþlem yaptý veri tabanýndan o kadar veri çekti hesap kitap
	//  taki biri 0 girmiþ bile ya da yanlýþlýkla, haliyle programýn çökmesi verilerin, zamanýnda önemli ölçüde kaybýna 
	//	yol açacaktýr, Bu yüzden Try Catch yazmamýz lazým 
			
			
			//sonuc = bolunen / bolen;
			//cout << sonuc << endl;
	try {
		
		if (bolen == 0) {
			
			throw 99;
		}
		//Eðer throw ile exception atamasý yapmadýysa buradan devam edecektir(throw yapýnca bir daha aþaðý okumaz)
		sonuc = bolunen / bolen;
		cout << sonuc << endl;
	}

	catch (int hatakodu) {
		cout << "Bolen sayi 0 olamaz" << endl << hatakodu << endl;
	}

	cout << "Program sonu ve .exe basarili bir sekilde yurutuldu";
}