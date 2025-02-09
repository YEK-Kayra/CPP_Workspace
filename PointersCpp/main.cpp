#include <iostream>

using namespace std;

int main() {

	int arr[] = { 1,2,3 };

	int* ptr;

	ptr = arr;

	//cout << arr << " " << ptr << endl;		// Same thing , they give us the address
	//cout << arr[0] << " " << *ptr << endl;	// Same thing , they give us the value (index 0)
	cout << arr[1] << " " << *(ptr+1) << endl;	// Same thing , they give us the value (index 1)
	
	*(ptr + 2) = 15;			// change the value by using pointers
	*(ptr + 2) *= 2;			// <== give us 30 ==> *(ptr + 2) = *(ptr + 2) * 2;
	cout << arr[2] << endl << endl;

	/*******************************Adresleri***********************/

	cout << &arr[1] << " " << (ptr + 1) << " Same" << endl;
	cout << &arr[2] << " " << (ptr + 2) << " Same" << endl;
}