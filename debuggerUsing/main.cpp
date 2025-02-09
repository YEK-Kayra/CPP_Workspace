#include <iostream>

using namespace std;

int main() {

	int myNumber;

	cout << "Please enter a number : ";
	cin >> myNumber;

	// 1
	// 2 2
	// 3 3 3 
	// 4 4 4 4 
	for (int i = 1; i <= myNumber; i++) {	// Check line number

		for (int j = 1; j <= i; j++) {		// x times put related line number

			cout << " " << i;

		}

		cout << endl;


	}

}