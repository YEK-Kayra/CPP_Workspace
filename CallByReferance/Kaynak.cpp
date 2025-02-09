#include <iostream>

using namespace std;


//gelen deðiþkenin deðerini deðil adresine ulaþýyor. Ama matematiksel oparatörler yine ayný çalýþýyor.
void degistir(int& deger) {
	deger += 10;
}

int main(){

	int sayi = 10;
	cout << "At the beginnig :" << sayi << endl;

	degistir(sayi);
	cout << "At the end :" << sayi << endl;



}