#include <iostream>

using namespace std;

// Burada sürekli ram üzerinde sayac adýnda bir deðiþken tanýmlanýyor tekrardan, ve deðeri sýfýra eþitleniyor
// Ama daha önce de buraya geldi sayac vardý deðeri artmýþtý falan
// Fakat ram üzerinde bu iþ öyle deðil, tekrar tanýmlama ve öncekini silme, local deðiþken zaten 
void fonksiyon1() {
	//int sayac = 0;
	static int sayac = 0;	//Eðer static yaparsan ilk geldiðinde ramda yerini ayýrýr içine 0 deðerini atar
							// ikinci geliþinde de bakar ki bu static ve ramda de yeri var haliyle bu satýrý görmez
							//ama bu buraya ait lokal bir deðiþken olur tek farký dýþarýdan extern etmek gerektirmez
							//fakat buradan dýþarda da kullanamazsýn
	sayac++;
	cout << " Cagirilma numara : " << sayac << endl;
}
int main() {

	// Declaration & Initialization will be together
	// Don't use #define , use const type
	// After this defination , you can't change its value on program where ever
	const double piNumber = 3.1468497;	

	// the expression will be lvalue(left value) olmalý diyor yani deðiþtirilebilmeli ama deðil iþte
	//piNumber = 3;
	//cout << piNumber;


	/********************************************************************************/

	//Static Variable Explanation

	// static olarak bildirildiðinde program ömrü boyunca o deðiþkene yer ayrýlýyor
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();

	//sayac++;	// Görüldüðü gibi tanýmlý deðil diyor




}