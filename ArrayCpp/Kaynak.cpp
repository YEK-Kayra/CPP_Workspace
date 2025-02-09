#include <iostream>

using namespace std;

int main() {

	/*
	string Seasons[] = { "spring", "summer", "autumn", "winter" };

	for (int i = 0; i <= 3; i++) {
		cout << Seasons[i] << " ";
	}
	*/

	int myArray[2][3] = { {1,2,3},
						  {3,4,5} };

	cout << myArray[0][0] << endl;

	cout << "Please enter a new number for 1.line and 2.cloumn : ";
	cin >> myArray[0][1];

	cout << myArray[0][1];


}