#include <iostream>

using namespace std;

// Burada s�rekli ram �zerinde sayac ad�nda bir de�i�ken tan�mlan�yor tekrardan, ve de�eri s�f�ra e�itleniyor
// Ama daha �nce de buraya geldi sayac vard� de�eri artm��t� falan
// Fakat ram �zerinde bu i� �yle de�il, tekrar tan�mlama ve �ncekini silme, local de�i�ken zaten 
void fonksiyon1() {
	//int sayac = 0;
	static int sayac = 0;	//E�er static yaparsan ilk geldi�inde ramda yerini ay�r�r i�ine 0 de�erini atar
							// ikinci geli�inde de bakar ki bu static ve ramda de yeri var haliyle bu sat�r� g�rmez
							//ama bu buraya ait lokal bir de�i�ken olur tek fark� d��ar�dan extern etmek gerektirmez
							//fakat buradan d��arda da kullanamazs�n
	sayac++;
	cout << " Cagirilma numara : " << sayac << endl;
}
int main() {

	// Declaration & Initialization will be together
	// Don't use #define , use const type
	// After this defination , you can't change its value on program where ever
	const double piNumber = 3.1468497;	

	// the expression will be lvalue(left value) olmal� diyor yani de�i�tirilebilmeli ama de�il i�te
	//piNumber = 3;
	//cout << piNumber;


	/********************************************************************************/

	//Static Variable Explanation

	// static olarak bildirildi�inde program �mr� boyunca o de�i�kene yer ayr�l�yor
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();

	//sayac++;	// G�r�ld��� gibi tan�ml� de�il diyor




}