#include <iostream>

using namespace std;

/****Anlayabildiðimi Kadarý Ýle Neden Yapýyoruz****/
/*
Gelen deðer iþini yaptýktan sonra sürekli bellekte yer tutmasýn serbest býraksýn diye böyle bir kullaným var
çünkü sen sürekli pointer tanýmlý duruyor ve
*/

int main() {

	int* ptr = new int;	// RESERVED any location of on the Ram , and get its address 
	cout << "Ptr keeps the value and point address : " << *ptr << "  " << ptr << endl;	// -842150451 we get 

	*ptr = 15;			// Write new value instead of its old value
	cout << "Ptr keeps the value : " << *ptr << endl;	// After the assignment process, 15 we get

	delete ptr;			// Free the related location for other process


	// Sildikten sonra da iþaret ettiði adresin içerðini tekrar kullanmaya çalýþman hata verir 
	//cout << *ptr << endl;
	cout << ptr << endl;
	
	
	ptr = NULL; // ptr pointerýnýn içeriðine NULL koymamýz sayesinde artýk bu RAM üstünde bir yeri reserve etmicek anlamýna gelir 
			   // ve if sorgularýnda runtime hatasý verdirmez, 
	//Hem reserve ettiði yerdeki deðer kalktý , hem reserve ettiði adress i kendi bünyesinden NULL koyup kaldýrmýþ oldu
	
	//cout << *ptr;	//Ýþaret etmediði bir adresin tutupda hangi içeriðini göstersin

		if (ptr != NULL) {// eðer ptr nin içeriði NULL dan farklý ise 
			cout << *ptr << endl; 
		}

		/************************************************************************************/

		// Þimdi ptr pointer ý ortadan kalmadý sonuçta, yeniden yer atamasý yapabilirim

		ptr = new int; // Ne yaptýk 4 bytelýk bir alan yine tahsis ettik 
		*ptr = 9;	 // Ne yaptýk bu reserved edilen yere ulaþtýk ve içine 9 yazdýk
		cout << *ptr; // Ne oldu 9 deðeri yazýlmýþ oldu
		
		
	
	return 0; //Process is successed other values mean fail
}