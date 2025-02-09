#include <iostream>
#include <chrono> // Algoritma performanslar�n� �l�mem i�in �a��rd���m k�t�phane

using namespace std;

/*
void func12(int sayi) {

	sayi = sayi + 1;

}

void function12(int myArray[],int myindx) {

	myArray[myindx] += 6;

}
*/


int main() {

	/*

	int sayi = 10;
	int myarray[] = {12,13,14};

	function12(myarray,0);

	cout << myarray[0];

	//func(sayi);
	//cout << sayi;

	*/
	int myNumber;
	int myCounter = 0;

	cout << "Please enter a number : ";
	cin >> myNumber;
	
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	// Her sayiyi bu sayede tarayaca��z
	for (int i = 1; i <= myNumber; i++) {
		myCounter = 0;
		//j = 1 den ba�layarak i en son nereye geldiyse oraya kadar ilerleyip kalans�z b�l�nmeyi kontrol edece�iz
		//counter de�i�keni bir kendisine b�l�nd���nde ++ olcak bir de 1 e b�l�nd���nde 
		//E�er 3 de�eri yahut yukar� de�er al�rsa bil ki o sayi asal de�il
		for (int j = 1; j <= i; j++) {

			

			if (i % j == 0) {

				myCounter++;
				//if (myCounter >= 3) {
					//break;
				//}
			}

		}
		if (myCounter == 2) {
			cout << i << ", ";
		}



	}
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Time difference = "
		<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
		<< "[�s]" << std::endl;

	cout << endl;

}