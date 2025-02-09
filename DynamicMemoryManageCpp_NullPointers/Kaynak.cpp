#include <iostream>

using namespace std;

int main() {

	int* ptr;
	ptr = NULL;

	if(ptr != NULL) {	//Ýçeriði NUL olduðu için buraya girmeyecek
		cout << *ptr << endl;
	}
	else {
		ptr = new int(5);	// ptr nin int bytelýk reserve etmesi ve içeriðine 5 yazmasý gerektiðini söylüyoruz
	}
	
	cout << *ptr << endl;


}