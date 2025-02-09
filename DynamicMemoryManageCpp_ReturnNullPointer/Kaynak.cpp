#include <iostream>

using namespace std;

float* ReadActualPress() {

	float* sensorptr = new float;
	*sensorptr = 37;
	return sensorptr; // Tanýmlanan pointerý döndürecek
}

int main() {


	float* ptr;
	ptr = ReadActualPress(); // ptr bir pointer ve adresi tutacak, yani deðer kopyalanmýyor adres tutuluyor :)
	cout << *ptr << endl;

	delete ptr;				// ptr'nin reserve yaptýðý yeri salsýn diye yazarýz

}