#include <iostream>

using namespace std;


//gelen de�i�kenin de�erini de�il adresine ula��yor. Ama matematiksel oparat�rler yine ayn� �al���yor.
void degistir(int& deger) {
	deger += 10;
}

int main(){

	int sayi = 10;
	cout << "At the beginnig :" << sayi << endl;

	degistir(sayi);
	cout << "At the end :" << sayi << endl;



}