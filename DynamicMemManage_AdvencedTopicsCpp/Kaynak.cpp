#include <iostream>

using namespace std;

/*PROBLEM NEDÝR*/
/*
* RunTime esnasýnda biz bir array oluþturup ilgili tipten kaç yer rezerve edeceðini belirleyemeyiz.
* Bu yüzden de memory blocklarý tanýmlayacaðýz, bunlar da runtime esnasýnda kaç byte dizi oluþturmak istiyorsam
* o kadarlýk alaný ardý ardýna açýlan memory blocklar la tahsis edecek
**/

int main() {

	int n;

	cout << "Please enter your array's size number : ";
	cin >> n;


	int* ptr = new int[n];

	// Now the user begin to put the values into the array's index
	for (int i = 0; i < n; i++) {
		// arrayler ile pointerlar kardeþ gibi davranýr.
		cin >> ptr[i];	
	}

	for (int i = 0; i < n; i++) {
		cout << ptr[i] << ", ";
	}

	// Tahsis edilen n adetlik dizi yerlerini serbest býrakmamýzý saðlar 
	delete[] ptr;

}