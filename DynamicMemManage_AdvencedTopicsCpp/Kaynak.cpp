#include <iostream>

using namespace std;

/*PROBLEM NED�R*/
/*
* RunTime esnas�nda biz bir array olu�turup ilgili tipten ka� yer rezerve edece�ini belirleyemeyiz.
* Bu y�zden de memory blocklar� tan�mlayaca��z, bunlar da runtime esnas�nda ka� byte dizi olu�turmak istiyorsam
* o kadarl�k alan� ard� ard�na a��lan memory blocklar la tahsis edecek
**/

int main() {

	int n;

	cout << "Please enter your array's size number : ";
	cin >> n;


	int* ptr = new int[n];

	// Now the user begin to put the values into the array's index
	for (int i = 0; i < n; i++) {
		// arrayler ile pointerlar karde� gibi davran�r.
		cin >> ptr[i];	
	}

	for (int i = 0; i < n; i++) {
		cout << ptr[i] << ", ";
	}

	// Tahsis edilen n adetlik dizi yerlerini serbest b�rakmam�z� sa�lar 
	delete[] ptr;

}