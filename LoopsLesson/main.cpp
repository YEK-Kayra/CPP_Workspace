#include <iostream>

using namespace std;

int main() {

/*
	int password = 1234;
	int myinput;

	do { //Amac�m�z program�n ilerleyi�ine g�re ilk ba� bir kere bir �eyler �al���ak ki sonras�nda kontrol yapal�m , farkl� algoritmada kullan�labilir 
		
		cout << " Please enter your password : ";
		cin >> myinput;
		

	} while (myinput != password); //False ise tekrardan ba�a d�nmez direk bir a�a��daki sat�rdan �al��maya devam eder

	cout << "Program End";
	*/





	/*
	int userNumber;
	int userResultFactoriel=1;

	cout << "Please enter a number that you calculate factorial : ";
	cin >> userNumber;

	for (int k = userNumber; k >= 1; k--) {
		userResultFactoriel *= k;
	}

	cout << "Result is " << userResultFactoriel << endl;
	*/


	//break : D�ng�leri sonland�r�r
	//continue : continue keyword'�n�n alt�ndaki kod sat�rlar� atlan�r ve tekrardan d�ng� ba��na gelinir


	for (int i = 0; i <= 5; i++) {

		if (i == 2) {	// 2 numaras� bas�lmaz bu sayede
			continue;
		}

		if (i == 4) {	// 4 e gelindi�inde de 4 den sonras� ne olursa olsun bu d�ng� art�k sonlan�r
			break;
		}
		cout << " " << i;
	}

}