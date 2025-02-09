#include <iostream>

using namespace std;

/****Anlayabildi�imi Kadar� �le Neden Yap�yoruz****/
/*
Gelen de�er i�ini yapt�ktan sonra s�rekli bellekte yer tutmas�n serbest b�raks�n diye b�yle bir kullan�m var
��nk� sen s�rekli pointer tan�ml� duruyor ve
*/

int main() {

	int* ptr = new int;	// RESERVED any location of on the Ram , and get its address 
	cout << "Ptr keeps the value and point address : " << *ptr << "  " << ptr << endl;	// -842150451 we get 

	*ptr = 15;			// Write new value instead of its old value
	cout << "Ptr keeps the value : " << *ptr << endl;	// After the assignment process, 15 we get

	delete ptr;			// Free the related location for other process


	// Sildikten sonra da i�aret etti�i adresin i�er�ini tekrar kullanmaya �al��man hata verir 
	//cout << *ptr << endl;
	cout << ptr << endl;
	
	
	ptr = NULL; // ptr pointer�n�n i�eri�ine NULL koymam�z sayesinde art�k bu RAM �st�nde bir yeri reserve etmicek anlam�na gelir 
			   // ve if sorgular�nda runtime hatas� verdirmez, 
	//Hem reserve etti�i yerdeki de�er kalkt� , hem reserve etti�i adress i kendi b�nyesinden NULL koyup kald�rm�� oldu
	
	//cout << *ptr;	//��aret etmedi�i bir adresin tutupda hangi i�eri�ini g�stersin

		if (ptr != NULL) {// e�er ptr nin i�eri�i NULL dan farkl� ise 
			cout << *ptr << endl; 
		}

		/************************************************************************************/

		// �imdi ptr pointer � ortadan kalmad� sonu�ta, yeniden yer atamas� yapabilirim

		ptr = new int; // Ne yapt�k 4 bytel�k bir alan yine tahsis ettik 
		*ptr = 9;	 // Ne yapt�k bu reserved edilen yere ula�t�k ve i�ine 9 yazd�k
		cout << *ptr; // Ne oldu 9 de�eri yaz�lm�� oldu
		
		
	
	return 0; //Process is successed other values mean fail
}