#include <iostream>
#include "myErrorClass.h"
using namespace std;

	//class myErrorClass {

	//private:
	//	string errorCode;

	//public:

	//	myErrorClass(string isErrorCode) {
	//		errorCode = isErrorCode;
	//	}

	//	string getErrorCode() {
	//		return errorCode;
	//	}

	//};

	//int main() { //that's the real main function

	//	try{
	//		int x;
	//		//throw  myErrorClass("Sensor calibration error");  // Create an error object with class constructor
	//		//throw  myErrorClass("Sensor getting data error"); // This is not handled by the program.
	//														  // try da bir kez throw yaptýktan sonra diðer throwlara bir daha dönülmez, catch den sonra da program aþaðý doðru devam eder

	//		cout << "Please enter x value : ";
	//		cin >> x;
	//		if (x < 0) {
	//			throw myErrorClass("Error type is 1");
	//		}
	//		else if (x == 0) {
	//			throw 101;		//This causes runtime error, because catch part doest keep 
	//		}
	//		
	//		cout << "X value is ==> " << x << endl;

	//	}
	//	catch (myErrorClass errObj) {
	//		cout << "Sepesific error catched! Special error message :" << errObj.getErrorCode() << endl;
	//	}

	//	cout << "End of program, bye...\n";

	//}

	/****************UPDATE***************V1.0*****/
	
	/*we have a single right for sending exception to catch block, all revesion is that */
	
	//int main() { //that's the real main function

	//	try {
	//		int x;
	//		//throw  myErrorClass("Sensor calibration error");  // Create an error object with class constructor
	//		//throw  myErrorClass("Sensor getting data error"); // This is not handled by the program.
	//														  // try da bir kez throw yaptýktan sonra diðer throwlara bir daha dönülmez, catch den sonra da program aþaðý doðru devam eder

	//		cout << "Please enter x value : ";
	//		cin >> x;
	//		if (x < 0) {
	//			throw myErrorClass("Error type is 1");
	//		}
	//		else if (x == 0) {
	//			throw 101;		//This causes runtime error, because catch part doest keep 
	//		}

	//		cout << "X value is ==> " << x << endl;

	//	}
	//	catch (myErrorClass errObj) {
	//		cout << "Sepesific error catched! Special error message :" << errObj.getErrorCode() << endl;
	//	}
	//	catch (int errorNumber) { // this provides that do not face with runtime error,
	//		cout << "Sepesific error catched! Special error message :" << errorNumber << endl;
	//	}

	//	cout << "End of program, bye...\n";

	//}



	/**************************UPDATE***********************V.2.0******************/

	//int main() { //that's the real main function

	//	try {
	//		int x;
	//		//throw  myErrorClass("Sensor calibration error");  // Create an error object with class constructor
	//		//throw  myErrorClass("Sensor getting data error"); // This is not handled by the program.
	//														  // try da bir kez throw yaptýktan sonra diðer throwlara bir daha dönülmez, catch den sonra da program aþaðý doðru devam eder

	//		cout << "Please enter x value : ";
	//		cin >> x;
	//		if (x < 0) {
	//			throw myErrorClass("Error type is 1");
	//		}
	//		else if (x == 0) {
	//			throw 101;		//This causes runtime error, because catch part doest keep 
	//		}

	//		cout << "X value is ==> " << x << endl;

	//	}
	//	catch (...) {					// All exceptions are sent to here, but we can not extract in each others
	//		cout << "Exception is taken" << endl;
	//	}

	//	cout << "End of program, bye...\n";

	//}



	/**************************UPDATE***********************V.3.0******************/

int main() { //that's the real main function

	try 
	{
		int x;
		//throw  myErrorClass("Sensor calibration error");  // Create an error object with class constructor
		//throw  myErrorClass("Sensor getting data error"); // This is not handled by the program.
														  // try da bir kez throw yaptýktan sonra diðer throwlara bir daha dönülmez, catch den sonra da program aþaðý doðru devam eder

		cout << "Please enter x value : ";
		cin >> x;
		if (x < 0) {
			throw myErrorClass("Error type is 1"); //Create an object by clas constructor and throw it
		}
		else if (x == 0) {
			throw 101;		//This causes runtime error, because catch part doest keep 
		}

		cout << "X value is ==> " << x << endl;
	}

	/************************** CATCH Overload ************************/
	catch (myErrorClass errObj) {
		cout << "Sepesific error catched! Special error message :" << errObj.getErrorCode() << endl; //use class public get function
	}
	catch (int errorNumber) { // this provides that do not face with runtime error,
		cout << "Sepesific error catched! Special error message :" << errorNumber << endl;	
	}

	

	cout << "End of program, bye...\n";

}