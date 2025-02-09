#include <iostream>

using namespace std; 

void ReturnErrorMessage() {
	cout << "There is an error on the program" << endl;
}

void ReturnErrorMessage(string msg) {
	cout << "Related error is " << msg << endl;
}

void ReturnErrorMessage(int ErrorNumber_1, int ErrorNumber_2) {
	cout << "Listed error numbers as given right ==> " << ErrorNumber_1 << " " << ErrorNumber_2 << endl;
}

float ReturnErrorMessage(float deneme) {

	return 3.14;
}



string AssembleName(string first, string second){
	return (first +" " +second);
}

int main() {

	/*
	string fullName;
	string firstOne;
	string secondOne;

	cout << "Please enter first name :";
	cin >> firstOne;
	cout << "Please enter second name :";
	cin >> secondOne;

	
	fullName = AssembleName(firstOne, secondOne);
	cout << "The fullname is " << fullName;
	
	cout << endl << AssembleName(firstOne, secondOne) << endl;
	*/




	//**************FunctionOverLoad****************//

	ReturnErrorMessage();
	ReturnErrorMessage("OverStuck");
	ReturnErrorMessage(404, 408);



}

