#include <iostream>

using namespace std;

int main2() {	// if we write main2 instead of main , the builder doesn't see here
				// it's kind of normal funtion like changeSensorValue(); 

	try {

		int x = 30;
		int y;

		cout << "Please enter a positive number : ";
		cin >> y;

		if(y == 0){
			throw 100; //error number 100
		}
		else if (y < 0) {
			throw 101; 
		}
		else {
			int z = x / y;
			cout << "The result of the division is as follows : " << z << endl;
		}

	}
	catch (int errorCode) {

		cout << "An exception with error number " << errorCode << " occurred." << endl;

		if (errorCode == 100) {
			cout << "Do not divide your number with zero!" << endl;
			return -1;
		}
		else if (errorCode == 101) {
			cout << "Do not divide your number with negative number!" << endl;

		}


	}

	

	cout << "Program sonu..."; //Catch de de�erlendirilip i� yap�l�nca programdaki hata al�nan yer bize g�sterildi
								// ama runtime � bozmad� , ��nk� program�n crash vermesi b�t�n sistemi ala�a�� edebilir


}

