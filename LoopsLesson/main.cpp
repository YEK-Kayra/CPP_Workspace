#include <iostream>

using namespace std;

int main() {

/*
	int password = 1234;
	int myinput;

	do { //Amacýmýz programýn ilerleyiþine göre ilk baþ bir kere bir þeyler çalýþçak ki sonrasýnda kontrol yapalým , farklý algoritmada kullanýlabilir 
		
		cout << " Please enter your password : ";
		cin >> myinput;
		

	} while (myinput != password); //False ise tekrardan baþa dönmez direk bir aþaðýdaki satýrdan çalýþmaya devam eder

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


	//break : Döngüleri sonlandýrýr
	//continue : continue keyword'ünün altýndaki kod satýrlarý atlanýr ve tekrardan döngü baþýna gelinir


	for (int i = 0; i <= 5; i++) {

		if (i == 2) {	// 2 numarasý basýlmaz bu sayede
			continue;
		}

		if (i == 4) {	// 4 e gelindiðinde de 4 den sonrasý ne olursa olsun bu döngü artýk sonlanýr
			break;
		}
		cout << " " << i;
	}

}