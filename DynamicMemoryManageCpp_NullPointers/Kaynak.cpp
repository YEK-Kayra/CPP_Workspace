#include <iostream>

using namespace std;

int main() {

	int* ptr;
	ptr = NULL;

	if(ptr != NULL) {	//��eri�i NUL oldu�u i�in buraya girmeyecek
		cout << *ptr << endl;
	}
	else {
		ptr = new int(5);	// ptr nin int bytel�k reserve etmesi ve i�eri�ine 5 yazmas� gerekti�ini s�yl�yoruz
	}
	
	cout << *ptr << endl;


}