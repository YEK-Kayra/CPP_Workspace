#include <iostream>

using namespace std;

float* ReadActualPress() {

	float* sensorptr = new float;
	*sensorptr = 37;
	return sensorptr; // Tan�mlanan pointer� d�nd�recek
}

int main() {


	float* ptr;
	ptr = ReadActualPress(); // ptr bir pointer ve adresi tutacak, yani de�er kopyalanm�yor adres tutuluyor :)
	cout << *ptr << endl;

	delete ptr;				// ptr'nin reserve yapt��� yeri sals�n diye yazar�z

}