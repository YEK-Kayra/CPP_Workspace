#include <iostream>

using namespace std;

/*
int main() {

	int x = 1;

	do {

		x++;
		cout << " * ";


	} while (++x < 5); //First of all, compare x value with number 5, after thar increase by 1
					   //if the expression was ++x , first of all increase by 1, after that compare with number 5

	cout << " x : " << x;

	//Answer:
	// * * *
	// x = 7 
}
*/
/*
void replaceArray(int arr[], int k) {

	arr[k] = arr[k] * arr[k];

}

int main() 
{

	 int myArry[] = { 2, 7, 14 };
	 int mySize = sizeof(myArry) / sizeof(myArry[0]);		// int = 4BYTE, for example sizeof(myArry)=>36BYTE,  ==> 36/4 => 9 element 
	for (int j = 0; j < mySize; j++) {

		if (myArry[j] % 2 == 0) {
			replaceArray(myArry,j);
		}

		cout << myArry[j] << " ";
	
	}


}
*/

/*
int main() {

	int sizeElement;

	cout << "Please enter total number of elements : ";
	cin >> sizeElement;

	int* p = new int[sizeElement];	// We use Dynamic memory allocation feature at c++ with pointer

	for (int j = 0; j < sizeElement; j++) {
		cout << j << ".element :";
		cin >> p[j];
	}
	cout << "Elements was received succesfully" << endl;

	for (int k = sizeElement-1; k >= 0; k--) {
		cout << p[k] << ", ";
	}


	delete p;		// We remove reserved parts on the RAM


}
*/

/*
int main() {

	int x = 10, y = 32, z = 10, w;
	w = x + 21 - y % z * 2;
	cout << "Result is " << w;

}
*/